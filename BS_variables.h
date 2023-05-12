byte recindex = 0;


// keys
Bounce D0 = Bounce(0, 10);  
Bounce D1 = Bounce(1, 10);  
Bounce D2 = Bounce(2, 10);  
Bounce D3 = Bounce(3, 10);  
Bounce D4 = Bounce(4, 10);  
Bounce D5 = Bounce(5, 10);  
Bounce D6 = Bounce(6, 10);  
Bounce D7 = Bounce(7, 10);  
Bounce D8 = Bounce(8, 10);  
Bounce D9 = Bounce(9, 10);  
Bounce D10 = Bounce(10, 10);  
Bounce D11 = Bounce(11, 10);  
Bounce D12 = Bounce(24, 10);  



int16_t noisewave[256]= {};

int16_t samplewave[256] = {};
byte delaybuffer[6350] = {};
#define MAXDELAY 5119
uint16_t waddress = 0;
uint16_t raddress = 0;

void doenvelope();

#define LOW1 33             /
#define LOW2 35
#define LOW3 37
#define LOW4 39
#define LOW5 41          
#define LOW6 44
#define LOW7 46
#define LOW8 49
#define LOW9 52           
#define LOW10 55
#define LOW11 58
#define LOW12 62
#define LOW13 65
  
#define MID1 65            
#define MID2 69
#define MID3 73
#define MID4 78
#define MID5 82           
#define MID6 87
#define MID7 92
#define MID8 98
#define MID9 104           
#define MID10 110
#define MID11 117
#define MID12 123
#define MID13 131

#define HIGH1 131           
#define HIGH2 139
#define HIGH3 147
#define HIGH4 156
#define HIGH5 165           
#define HIGH6 175
#define HIGH7 185
#define HIGH8 196
#define HIGH9 208           
#define HIGH10 220
#define HIGH11 233
#define HIGH12 247
#define HIGH13 262



byte keystate0 = 0;
byte keystate1 = 0;
byte keystate2 = 0;
byte keystate3 = 0;
byte keystate4 = 0;
byte keystate5 = 0;
byte keystate6 = 0;
byte keystate7 = 0;
byte keystate8 = 0;
byte keystate9 = 0;
byte keystate10 = 0;
byte keystate11 = 0;
byte keystate12 = 0;


byte vibeofftape;
byte noiseoffburn;
byte delayoffverb;

float tempecho;
float tempfray;
int percent;
float noise;

float moddepth;
float lastmoddepth;

float verb;
float lastverb;

byte bitdepth;
byte lastbitdepth;

float fray;
float frayrand;
int frayrandint;
float lastfray;

byte wave = 0;
byte lastwave = 0;

uint32_t offtimer = 0;

float lforate = 1;          // randomised modulation hz
uint16_t lfotime = 1000;    // 1000 / lforate
uint32_t mssave = 0;        // save current millis
float tempdepth;
byte droporwait = 1;
byte waitdroprise = 0;

// glitch delay
uint16_t currentMillis;

int i;

// waveforms
int attck = 500;
int lastattck = 500;
int hld = 10;
int lasthld = 10;
int dcy = 0;
int lastdcy = 0;
float sstn = 1;
float lastsstn = 1;
int rls = 500;
int lastrls = 500;
int rlsn = 50;

byte flashcount = 3;


byte keyrange = 0;
byte lastkeyrange = 10;
