
template<uint8_t pinA, uint8_t pinB>
class rotKnob {
public:
  void begin(int8_t startVal, int8_t lowBound, int8_t hiBound) {
    d._sValue = startVal;
    d._lBound = lowBound;
    d._hBound = hiBound;
    d._aConf = digital_pin_to_info_PGM[(pinA)].mux;
    d._bConf = digital_pin_to_info_PGM[(pinB)].mux;
    pinMode(pinA, INPUT_PULLUP);
    pinMode(pinB, INPUT_PULLUP);
    delay(1);
    d._aVal = digitalReadFast(pinA);
    d._bVal = digitalReadFast(pinB);
    attachInterrupt(pinA, intPinA, CHANGE);
    attachInterrupt(pinB, intPinB, CHANGE);
  }
  void begin(int8_t startVal) {
    begin(startVal, -128, 127);
  }
  void begin() {
    begin(0, -128, 127);
  }
  void end() {
    detachInterrupt(pinA);
    detachInterrupt(pinB);
  }
  int8_t read() {
    d._avail = false;
    return d._sValue;
  }
  bool available() {
    return d._avail;
  }
private:
  struct objData {
    volatile uint32_t* _aConf, *_bConf;
    volatile int8_t _lBound, _hBound, _sValue;
    volatile bool _aVal, _bVal, _avail;
  };
  static objData d;
  static void intPinA() {
    *d._aConf &= ~0x000F0000; // disable pin A interrupts
                // decoding logic
    if (!d._aVal) {
      if ((d._sValue < d._hBound) && !d._bVal) {
        d._sValue++;
        d._avail = true;
      }
      if ((d._sValue > d._lBound) && d._bVal) {
        d._sValue--;
        d._avail = true;
      }
    }
    d._bVal = digitalReadFast(pinB); // read pinB which is stable after pinA transition
    *d._bConf |= 0x000B0000; // (re-) enable pinB interrupts
  }
  static void intPinB() {
    *d._bConf &= ~0x000F0000; // disable pinB interrupts
    d._aVal = digitalReadFast(pinA); // read pinA which is stable after pinB transition
    *d._aConf |= 0x000B0000; // (re-) enable pinA interrupts
  }
};
template<uint8_t pinA, uint8_t pinB>
typename rotKnob<pinA, pinB>::objData rotKnob<pinA, pinB>::d;


rotKnob<21, 22> enc1;     // wave encoder

#define CLK 15
#define DT 16
#define BUTTON 17



byte lastDT = 0;
byte lastCLK = 0;
byte currentDT = 0;
byte currentCLK = 0;

uint16_t sattack = 8;
uint16_t shold = 10;
uint16_t sdecay = 10;
float ssustain = 0.7;
uint16_t srelease = 50;

byte aselected = 1;
byte hselected = 0;
byte dselected = 0;
byte sselected = 0;
byte rselected = 0;

byte menuon = 0;    // 0 = off, 1 = adsr select, 2 = a or h or d or s or r 

byte menupos = 0;  // a / h / d / s / r

void adsrturned()
{
  if(aselected && menuon == 2)       
  {
    currentCLK = digitalRead(CLK); //Read the state of the CLK pin
    // If last and current state of CLK are different, then a pulse occurred  
    if (currentCLK != lastCLK  && currentCLK == 1)
    {
        // If the DT state is different than the CLK state then
        // the encoder is rotating in A direction, so we increase
        if (digitalRead(DT) != currentCLK) 
        {
          if(sattack < 50) 
          {
            sattack++; 
          }
          else
          {}      
        } 
        else 
        {
          if(sattack < 1) 
          {}
          else
          {
            // Encoder is rotating B direction so decrease
            sattack--;      
          }      
        }
        display.clearDisplay();
        display.setCursor(40, 25);  
        display.println(sattack); 
        display.display();    
    }
    lastCLK = currentCLK;  // Store last CLK state
  }

  
  else if(hselected && menuon == 2)       
  {
      currentCLK = digitalRead(CLK);
      if (currentCLK != lastCLK  && currentCLK == 1)
      {
        if (digitalRead(DT) != currentCLK) 
        {
          if(shold < 50) 
          {
            shold++;  
          }
          else
          {}      
        } 
        else 
        {
          if(shold < 1) //we do not go below 0
          {}
          else
          {
            shold--;      
          }      
        }
        display.clearDisplay();
        display.setCursor(40, 25);  
        display.println(shold); 
        display.display();    
    }
    lastCLK = currentCLK;  // Store last CLK state
  }

  else if(dselected && menuon == 2)       
  {
    currentCLK = digitalRead(CLK);
    if (currentCLK != lastCLK  && currentCLK == 1)
    {
      if (digitalRead(DT) != currentCLK) 
      {
        if(sdecay < 50) 
        {
          sdecay++;  
        }
        else
        {}      
      } 
      else 
      {
        if(sdecay < 1) //we do not go below 0
        {}
        else
        {
          sdecay--;      
        }      
      }
      display.clearDisplay();
      display.setCursor(40, 25);  
      display.println(sdecay); 
      display.display();    
    }
    lastCLK = currentCLK;  // Store last CLK state
  }
  



  

  else if(menuon == 1)                            // first menu
  {
    currentCLK = digitalRead(CLK);
    if (currentCLK != lastCLK  && currentCLK == 1)
    {
      // If the DT state is different than the CLK state then
      // the encoder is rotating in A direction, so we increase
      if (digitalRead(DT) != currentCLK) 
      {
        display.clearDisplay();
        display.setCursor(10, 25); 
        
        if(aselected)      { hselected = 1; dselected = 0; sselected = 0; rselected = 0; aselected = 0; display.println("hold"); }
        else if(hselected) { dselected = 1; dselected = 0; sselected = 0; rselected = 0; aselected = 0; display.println("decay"); }
        else if(dselected) { sselected = 1; dselected = 0; hselected = 0; rselected = 0; aselected = 0; display.println("sustain"); }
        else if(sselected) { rselected = 1; dselected = 0; sselected = 0; hselected = 0; aselected = 0; display.println("release"); }
        else if(rselected) { aselected = 1; dselected = 0; sselected = 0; rselected = 0; hselected = 0; display.println("attack"); }

        display.display();        
      } 
      else 
      {
//        if(menuCounter < 1) //we do not go below 0
//        {
////            menuCounter = 3;
//        }
//        else
//        {
        // Encoder is rotating CW so decrease
 //       menuCounter--;      
//        }      
      }    
    }
    lastCLK = currentCLK;  // Store last CLK state
  }




  
}



uint32_t adsrMillis = millis();



void adsrpushed()
{
  if(millis() - adsrMillis > 30)
  {
    if(!menuon)    
    {
      menuon = 1;
    }
    else if(menuon == 1)
    {
      menuon = 2;
    }
    else if(menuon == 2)
    {
      menuon = 0;
      display.clearDisplay();
    }
    
    adsrMillis = millis();
  }  

  
}

byte lastA = 0;
byte lastB = 0;
byte currentA = 0;
byte currentB = 0;

byte turnedCW = 0;
byte turnedCCW = 0;

int county = 0;



//Bounce DA = Bounce(BA, 50);  
//Bounce DB = Bounce(BB, 50); 

#define PIN_A 15
#define PIN_B 16
#define PUSH_BTN 17

volatile boolean turnDetected = false;

byte aaa;
byte bbb;

void rotary()
{
  
 #ifdef kjhkh
  turnDetected = true;
  if(turnDetected)
  {
    turnDetected = false;

    if(digitalRead(A15) != digitalRead(A16) )
      county++;
    else
      county--;
#endif
    aaa = digitalRead(A15);
    bbb = digitalRead(A16);

    delay(10);
  //}
}



void newencoder ()
{

  if(turnDetected)
  {
    turnDetected = false;

    if(digitalRead(A15) != digitalRead(A16) )
      county++;
    else
      county--;



    aaa = digitalRead(A15);
    bbb = digitalRead(A16);

        delay(50);
  }
}
