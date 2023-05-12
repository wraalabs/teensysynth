#include <Bounce2.h>
#include "effect_platervbstereo.h"
#include "effect_bitcrusher2.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <TeensyVariablePlayback.h>



#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformDc     dc3; //xy=227,602.566650390625
AudioSynthWaveformDc     dc4; //xy=231,949.566650390625
AudioSynthWaveformDc     dc5; //xy=245.99996948242188,1328.566650390625
AudioSynthWaveformDc     dc7; //xy=251,2194.3499450683594
AudioSynthWaveformDc     dc8; //xy=255,2541.3499450683594
AudioSynthWaveformDc     dc2;            //xy=267.8833312988281,223.88333129882812
AudioSynthWaveform       lfo2; //xy=269,531.566650390625
AudioSynthWaveform       lfo3; //xy=273,878.566650390625
AudioSynthWaveformDc     dc9; //xy=269.9999694824219,2920.3499450683594
AudioSynthWaveform       lfo4; //xy=287.9999694824219,1257.566650390625
AudioSynthWaveformDc     dc6; //xy=291.8833312988281,1815.6666259765625
AudioSynthWaveform       lfo6; //xy=293,2123.3499450683594
AudioSynthWaveform       lfo7; //xy=297,2470.3499450683594
AudioSynthWaveform       lfo1;      //xy=309.8833312988281,152.88333129882812
AudioSynthWaveform       lfo8; //xy=311.9999694824219,2849.3499450683594
AudioSynthWaveform       lfo5; //xy=333.8833312988281,1744.6666259765625
AudioMixer4              lfomixer1; //xy=428.8000183105469,558.6666564941406
AudioMixer4              lfomixer2; //xy=432.8000183105469,905.6666564941406
AudioMixer4              lfomixer3; //xy=447.79998779296875,1284.6666564941406
AudioMixer4              lfomixer5; //xy=452.8000183105469,2150.449951171875
AudioMixer4              lfomixer6; //xy=456.8000183105469,2497.449951171875
AudioMixer4              lfomixer; //xy=469.683349609375,179.98333740234375
AudioMixer4              lfomixer7; //xy=471.79998779296875,2876.449951171875
AudioMixer4              lfomixer4; //xy=493.683349609375,1771.7666320800781
AudioSynthNoisePink      pink2; //xy=581,762.566650390625
AudioSynthNoisePink      pink3; //xy=585,1109.566650390625
AudioSynthWaveformModulated waveform2; //xy=596.9999694824219,593.566650390625
AudioSynthWaveformModulated waveform3; //xy=600.9999694824219,940.566650390625
AudioSynthNoisePink      pink4; //xy=599.9999694824219,1488.566650390625
AudioSynthNoisePink      pink6; //xy=605,2354.3499450683594
AudioSynthNoisePink      pink7; //xy=609,2701.3499450683594
AudioSynthWaveformModulated waveform4; //xy=615.9999389648438,1319.566650390625
AudioSynthNoisePink      pink1;          //xy=621.8833312988281,383.8833312988281
AudioSynthWaveformModulated waveform6; //xy=620.9999694824219,2185.3499450683594
AudioSynthWaveformModulated waveform7; //xy=624.9999694824219,2532.3499450683594
AudioSynthNoisePink      pink8; //xy=623.9999694824219,3080.3499450683594
AudioSynthWaveformModulated waveform1;   //xy=637.88330078125,214.88333129882812
AudioSynthWaveformModulated waveform8; //xy=639.9999389648438,2911.3499450683594
AudioSynthNoisePink      pink5; //xy=645.8833312988281,1975.6666259765625
AudioSynthWaveformModulated waveform5; //xy=661.88330078125,1806.6666259765625
AudioFilterBiquad        biquad4; //xy=743.4833679199219,734.566650390625
AudioFilterBiquad        biquad5; //xy=747.4833679199219,1081.566650390625
AudioFilterBiquad        biquad6; //xy=762.4833374023438,1460.566650390625
AudioFilterBiquad        biquad8; //xy=767.4833679199219,2326.3499450683594
AudioFilterBiquad        biquad9; //xy=771.4833679199219,2673.3499450683594
AudioFilterBiquad        biquad3; //xy=784.36669921875,355.8833312988281
AudioFilterBiquad        biquad10; //xy=786.4833374023438,3052.3499450683594
AudioFilterBiquad        biquad7; //xy=808.36669921875,1947.6666259765625
AudioMixer4              mixer4; //xy=828.9999694824219,634.566650390625
AudioMixer4              mixer5; //xy=832.9999694824219,981.566650390625
AudioMixer4              mixer6; //xy=847.9999389648438,1360.566650390625
AudioMixer4              mixer9; //xy=852.9999694824219,2226.3499450683594
AudioMixer4              mixer10; //xy=856.9999694824219,2573.3499450683594
AudioMixer4              mixer1;         //xy=869.88330078125,255.88333129882812
AudioMixer4              mixer11; //xy=871.9999389648438,2952.3499450683594
AudioMixer4              mixer7; //xy=893.88330078125,1847.6666259765625
AudioEffectEnvelope      envelope2; //xy=994.9999694824219,635.566650390625
AudioEffectEnvelope      envelope3; //xy=998.9999694824219,982.566650390625
AudioEffectEnvelope      envelope4; //xy=1013.9999389648438,1361.566650390625
AudioEffectEnvelope      envelope6; //xy=1018.9999694824219,2227.3499450683594
AudioEffectEnvelope      envelope7; //xy=1022.9999694824219,2574.3499450683594
AudioEffectEnvelope      envelope1;      //xy=1035.88330078125,256.8833312988281
AudioEffectEnvelope      envelope8; //xy=1037.9999389648438,2953.3499450683594
AudioEffectEnvelope      envelope5; //xy=1059.88330078125,1848.6666259765625
AudioMixer4              mixer3; //xy=1209.6666259765625,444.5666809082031
AudioMixer4              mixer8; //xy=1233.6666259765625,2036.3499755859375
AudioSynthWaveformDc     dc11; //xy=1680.783447265625,2204.3499450683594
AudioSynthWaveformDc     dc12; //xy=1684.783447265625,2551.3499450683594
AudioSynthWaveformDc     dc13; //xy=1699.7834167480469,2930.3499450683594
AudioSynthWaveformDc     dc10; //xy=1721.6667785644531,1825.6666259765625
AudioSynthWaveform       lfo10; //xy=1722.783447265625,2133.3499450683594
AudioSynthWaveform       lfo11; //xy=1726.783447265625,2480.3499450683594
AudioSynthWaveformDc     dc14; //xy=1738.6666564941406,145.66664123535156
AudioSynthWaveform       lfo12; //xy=1741.7834167480469,2859.3499450683594
AudioSynthWaveform       lfo9; //xy=1763.6667785644531,1754.6666259765625
AudioSynthWaveform       lfo13; //xy=1780.6666564941406,74.66664123535156
AudioMixer4              lfomixer9; //xy=1882.5834655761719,2160.449951171875
AudioMixer4              lfomixer10; //xy=1886.5834655761719,2507.449951171875
AudioMixer4              lfomixer11; //xy=1901.5834350585938,2886.449951171875
AudioMixer4              lfomixer8; //xy=1923.466796875,1781.7666320800781
AudioMixer4              lfomixer12; //xy=1940.4666748046875,101.76664733886719
AudioSynthNoisePink      pink10; //xy=2034.783447265625,2364.3499450683594
AudioSynthNoisePink      pink11; //xy=2038.783447265625,2711.3499450683594
AudioSynthWaveformModulated waveform10; //xy=2050.783416748047,2195.3499450683594
AudioSynthWaveformModulated waveform11; //xy=2054.783416748047,2542.3499450683594
AudioSynthNoisePink      pink12; //xy=2053.783416748047,3090.3499450683594
AudioSynthWaveformModulated waveform12; //xy=2069.7833862304688,2921.3499450683594
AudioSynthNoisePink      pink9; //xy=2075.666778564453,1985.6666259765625
AudioSynthNoisePink      pink13; //xy=2092.6666564941406,305.66664123535156
AudioSynthWaveformModulated waveform9; //xy=2091.666748046875,1816.6666259765625
AudioSynthWaveformModulated waveform13; //xy=2108.6666259765625,136.66664123535156
AudioFilterBiquad        biquad12; //xy=2197.266815185547,2336.3499450683594
AudioFilterBiquad        biquad13; //xy=2201.266815185547,2683.3499450683594
AudioFilterBiquad        biquad14; //xy=2216.2667846679688,3062.3499450683594
AudioFilterBiquad        biquad11; //xy=2238.150146484375,1957.6666259765625
AudioFilterBiquad        biquad15; //xy=2255.1500244140625,277.66664123535156
AudioMixer4              mixer14; //xy=2282.783416748047,2236.3499450683594
AudioMixer4              mixer15; //xy=2286.783416748047,2583.3499450683594
AudioMixer4              mixer16; //xy=2301.7833862304688,2962.3499450683594
AudioMixer4              mixer12; //xy=2323.666748046875,1857.6666259765625
AudioMixer4              mixer17; //xy=2340.6666259765625,177.66664123535156
AudioEffectEnvelope      envelope10; //xy=2448.783416748047,2237.3499450683594
AudioEffectEnvelope      envelope11; //xy=2452.783416748047,2584.3499450683594
AudioEffectEnvelope      envelope12; //xy=2467.7833862304688,2963.3499450683594
AudioEffectEnvelope      envelope9; //xy=2489.666748046875,1858.6666259765625
AudioEffectEnvelope      envelope13; //xy=2506.6666259765625,178.66664123535156
AudioMixer4              mixer13; //xy=2663.4500732421875,2046.3499755859375
AudioMixer4              mixer18; //xy=2682.4500732421875,556.3499755859375
AudioSynthWaveformSine   sine1;          //xy=3693.8834228515625,258.8833312988281
AudioMixer4              fdbkmixer; //xy=3702.8499755859375,657.88330078125
AudioSynthWaveformDc     dc1;            //xy=3720.8834533691406,201.88333129882812
AudioFilterBiquad        biquad1;        //xy=3818.0001220703125,765
AudioEffectPlateReverb         delay1;         //xy=3878.8834228515625,619.88330078125
AudioMixer4              fraymixer; //xy=3895.1834716796875,227.88333129882812
AudioMixer4              mixer2; //xy=3960.85009765625,438.88330078125
AudioEffectDelay         delay2; //xy=4019.0001220703125,804
AudioEffectMultiply      multiply1;      //xy=4233.8834228515625,386.8833312988281
AudioFilterBiquad        biquad2; //xy=4408.8502197265625,400.8833312988281
AudioOutputMQS           mqs1;           //xy=4571.8834228515625,422.8833312988281
AudioConnection          patchCord1(dc3, 0, lfomixer1, 1);
AudioConnection          patchCord2(dc4, 0, lfomixer2, 1);
AudioConnection          patchCord3(dc5, 0, lfomixer3, 1);
AudioConnection          patchCord4(dc7, 0, lfomixer5, 1);
AudioConnection          patchCord5(dc8, 0, lfomixer6, 1);
AudioConnection          patchCord6(dc2, 0, lfomixer, 1);
AudioConnection          patchCord7(lfo2, 0, lfomixer1, 0);
AudioConnection          patchCord8(lfo3, 0, lfomixer2, 0);
AudioConnection          patchCord9(dc9, 0, lfomixer7, 1);
AudioConnection          patchCord10(lfo4, 0, lfomixer3, 0);
AudioConnection          patchCord11(dc6, 0, lfomixer4, 1);
AudioConnection          patchCord12(lfo6, 0, lfomixer5, 0);
AudioConnection          patchCord13(lfo7, 0, lfomixer6, 0);
AudioConnection          patchCord14(lfo1, 0, lfomixer, 0);
AudioConnection          patchCord15(lfo8, 0, lfomixer7, 0);
AudioConnection          patchCord16(lfo5, 0, lfomixer4, 0);
AudioConnection          patchCord17(lfomixer1, 0, waveform2, 0);
AudioConnection          patchCord18(lfomixer2, 0, waveform3, 0);
AudioConnection          patchCord19(lfomixer3, 0, waveform4, 0);
AudioConnection          patchCord20(lfomixer5, 0, waveform6, 0);
AudioConnection          patchCord21(lfomixer6, 0, waveform7, 0);
AudioConnection          patchCord22(lfomixer, 0, waveform1, 0);
AudioConnection          patchCord23(lfomixer7, 0, waveform8, 0);
AudioConnection          patchCord24(lfomixer4, 0, waveform5, 0);
AudioConnection          patchCord25(pink2, biquad4);
AudioConnection          patchCord26(pink3, biquad5);
AudioConnection          patchCord27(waveform2, 0, mixer4, 0);
AudioConnection          patchCord28(waveform3, 0, mixer5, 0);
AudioConnection          patchCord29(pink4, biquad6);
AudioConnection          patchCord30(pink6, biquad8);
AudioConnection          patchCord31(pink7, biquad9);
AudioConnection          patchCord32(waveform4, 0, mixer6, 0);
AudioConnection          patchCord33(pink1, biquad3);
AudioConnection          patchCord34(waveform6, 0, mixer9, 0);
AudioConnection          patchCord35(waveform7, 0, mixer10, 0);
AudioConnection          patchCord36(pink8, biquad10);
AudioConnection          patchCord37(waveform1, 0, mixer1, 0);
AudioConnection          patchCord38(waveform8, 0, mixer11, 0);
AudioConnection          patchCord39(pink5, biquad7);
AudioConnection          patchCord40(waveform5, 0, mixer7, 0);
AudioConnection          patchCord41(biquad4, 0, mixer4, 2);
AudioConnection          patchCord42(biquad5, 0, mixer5, 2);
AudioConnection          patchCord43(biquad6, 0, mixer6, 2);
AudioConnection          patchCord44(biquad8, 0, mixer9, 2);
AudioConnection          patchCord45(biquad9, 0, mixer10, 2);
AudioConnection          patchCord46(biquad3, 0, mixer1, 2);
AudioConnection          patchCord47(biquad10, 0, mixer11, 2);
AudioConnection          patchCord48(biquad7, 0, mixer7, 2);
AudioConnection          patchCord49(mixer4, envelope2);
AudioConnection          patchCord50(mixer5, envelope3);
AudioConnection          patchCord51(mixer6, envelope4);
AudioConnection          patchCord52(mixer9, envelope6);
AudioConnection          patchCord53(mixer10, envelope7);
AudioConnection          patchCord54(mixer1, envelope1);
AudioConnection          patchCord55(mixer11, envelope8);
AudioConnection          patchCord56(mixer7, envelope5);
AudioConnection          patchCord57(envelope2, 0, mixer3, 1);
AudioConnection          patchCord58(envelope3, 0, mixer3, 2);
AudioConnection          patchCord59(envelope4, 0, mixer3, 3);
AudioConnection          patchCord60(envelope6, 0, mixer8, 1);
AudioConnection          patchCord61(envelope7, 0, mixer8, 2);
AudioConnection          patchCord62(envelope1, 0, mixer3, 0);
AudioConnection          patchCord63(envelope8, 0, mixer8, 3);
AudioConnection          patchCord64(envelope5, 0, mixer8, 0);
AudioConnection          patchCord65(mixer3, 0, mixer18, 1);
AudioConnection          patchCord66(mixer8, 0, mixer18, 2);
AudioConnection          patchCord67(dc11, 0, lfomixer9, 1);
AudioConnection          patchCord68(dc12, 0, lfomixer10, 1);
AudioConnection          patchCord69(dc13, 0, lfomixer11, 1);
AudioConnection          patchCord70(dc10, 0, lfomixer8, 1);
AudioConnection          patchCord71(lfo10, 0, lfomixer9, 0);
AudioConnection          patchCord72(lfo11, 0, lfomixer10, 0);
AudioConnection          patchCord73(dc14, 0, lfomixer12, 1);
AudioConnection          patchCord74(lfo12, 0, lfomixer11, 0);
AudioConnection          patchCord75(lfo9, 0, lfomixer8, 0);
AudioConnection          patchCord76(lfo13, 0, lfomixer12, 0);
AudioConnection          patchCord77(lfomixer9, 0, waveform10, 0);
AudioConnection          patchCord78(lfomixer10, 0, waveform11, 0);
AudioConnection          patchCord79(lfomixer11, 0, waveform12, 0);
AudioConnection          patchCord80(lfomixer8, 0, waveform9, 0);
AudioConnection          patchCord81(lfomixer12, 0, waveform13, 0);
AudioConnection          patchCord82(pink10, biquad12);
AudioConnection          patchCord83(pink11, biquad13);
AudioConnection          patchCord84(waveform10, 0, mixer14, 0);
AudioConnection          patchCord85(waveform11, 0, mixer15, 0);
AudioConnection          patchCord86(pink12, biquad14);
AudioConnection          patchCord87(waveform12, 0, mixer16, 0);
AudioConnection          patchCord88(pink9, biquad11);
AudioConnection          patchCord89(pink13, biquad15);
AudioConnection          patchCord90(waveform9, 0, mixer12, 0);
AudioConnection          patchCord91(waveform13, 0, mixer17, 0);
AudioConnection          patchCord92(biquad12, 0, mixer14, 2);
AudioConnection          patchCord93(biquad13, 0, mixer15, 2);
AudioConnection          patchCord94(biquad14, 0, mixer16, 2);
AudioConnection          patchCord95(biquad11, 0, mixer12, 2);
AudioConnection          patchCord96(biquad15, 0, mixer17, 2);
AudioConnection          patchCord97(mixer14, envelope10);
AudioConnection          patchCord98(mixer15, envelope11);
AudioConnection          patchCord99(mixer16, envelope12);
AudioConnection          patchCord100(mixer12, envelope9);
AudioConnection          patchCord101(mixer17, envelope13);
AudioConnection          patchCord102(envelope10, 0, mixer13, 1);
AudioConnection          patchCord103(envelope11, 0, mixer13, 2);
AudioConnection          patchCord104(envelope12, 0, mixer13, 3);
AudioConnection          patchCord105(envelope9, 0, mixer13, 0);
AudioConnection          patchCord106(envelope13, 0, mixer18, 0);
AudioConnection          patchCord107(mixer13, 0, mixer18, 3);
AudioConnection          patchCord108(mixer18, 0, fdbkmixer, 0);
AudioConnection          patchCord109(mixer18, 0, mixer2, 0);
AudioConnection          patchCord110(sine1, 0, fraymixer, 1);
AudioConnection          patchCord111(fdbkmixer, biquad1);
AudioConnection          patchCord112(dc1, 0, fraymixer, 0);
AudioConnection          patchCord113(biquad1, delay1);
AudioConnection          patchCord114(biquad1, delay2);
AudioConnection          patchCord115(delay1, 0, mixer2, 1);
AudioConnection          patchCord116(fraymixer, 0, multiply1, 0);
AudioConnection          patchCord117(mixer2, 0, fdbkmixer, 1);
AudioConnection          patchCord118(mixer2, 0, multiply1, 1);
AudioConnection          patchCord119(delay2, 0, mixer2, 2);
AudioConnection          patchCord120(multiply1, biquad2);
AudioConnection          patchCord121(biquad2, 0, mqs1, 0);
// GUItool: end automatically generated code



//AudioPlayArrayResmp      rraw_a1;        //xy=321,513
//AudioConnection          patchCord47(rraw_a1, 0, mqs1, 0);


// AudioEffectPlateReverb





#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// The pins for I2C are defined by the Wire-library. 
// On an arduino UNO:       A4(SDA), A5(SCL)
// On an arduino MEGA 2560: 20(SDA), 21(SCL)
// On an arduino LEONARDO:   2(SDA),  3(SCL), ...
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define NUMFLAKES     10 // Number of snowflakes in the animation example

#define LOGO_HEIGHT   56
#define LOGO_WIDTH    52

#include "BS_waveforms.h"
#include "BS_encoder.h"
#include "BS_variables.h"
#include "BS_pots.h"




 void setup() {                                                                                                                       // SETUP

                                                                                                              
  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
  //  for(;;); // Don't proceed, loop forever
  }
  display.display();
  delay(250); // Pause for 2 seconds

  display.setTextSize(2); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);

    display.clearDisplay();                       // draw logo
  display.drawBitmap(
    (display.width()  - LOGO_WIDTH ) / 2,
    (display.height() - LOGO_HEIGHT) / 2,
    logo, LOGO_WIDTH, LOGO_HEIGHT, 1);
  display.display();
  delay(1000);



  // populate noise array
  for(i = 0; i <256; i++)
  {
    noisewave[i] = (rand()% 65536) - 32768;    
  }
 
  AudioMemory(300); //  measured in sample blocks, each providing 2.9ms of audio.

  analogReadResolution(12); // configure the pots to give 12 bit readings
  analogReadAveraging(32); 

  // keys
  pinMode(0, INPUT_PULLUP); // 
  pinMode(1, INPUT_PULLUP); // 
  pinMode(2, INPUT_PULLUP); // 
  pinMode(3, INPUT_PULLUP); // 
  pinMode(4, INPUT_PULLUP); // 
  pinMode(5, INPUT_PULLUP); // 
  pinMode(6, INPUT_PULLUP); // 
  pinMode(7, INPUT_PULLUP); // 
  pinMode(8, INPUT_PULLUP); // 
  pinMode(9, INPUT_PULLUP); // 
  pinMode(10, INPUT_PULLUP); // 
  pinMode(11, INPUT_PULLUP); // 
  pinMode(24, INPUT_PULLUP); // 


  // wave encoder
  pinMode(21, INPUT_PULLUP); // wave enc
  pinMode(22, INPUT_PULLUP); // wave enc
  pinMode(23, INPUT_PULLUP); // wave switch

  // adsr encoder
//  pinMode(15, INPUT); // 
//  pinMode(16, INPUT); // 
//  pinMode(17, INPUT_PULLUP); // adsr switch

  // toggle
  pinMode(14, INPUT_PULLUP); 
  pinMode(41, INPUT_PULLUP); 

  
  waveform1.begin(0.2, MID1, WAVEFORM_ARBITRARY); 
  waveform2.begin(0.2, MID2, WAVEFORM_ARBITRARY); 
  waveform3.begin(0.2, MID3, WAVEFORM_ARBITRARY); 
  waveform4.begin(0.2, MID4, WAVEFORM_ARBITRARY); 
  waveform5.begin(0.2, MID5, WAVEFORM_ARBITRARY); 
  waveform6.begin(0.2, MID6, WAVEFORM_ARBITRARY); 
  waveform7.begin(0.2, MID7, WAVEFORM_ARBITRARY); 
  waveform8.begin(0.2, MID8, WAVEFORM_ARBITRARY); 
  waveform9.begin(0.2, MID9, WAVEFORM_ARBITRARY); 
  waveform10.begin(0.2, MID10, WAVEFORM_ARBITRARY); 
  waveform11.begin(0.2, MID11, WAVEFORM_ARBITRARY); 
  waveform12.begin(0.2, MID12, WAVEFORM_ARBITRARY);
  waveform13.begin(0.2, MID13, WAVEFORM_ARBITRARY); 
  
  
  // mixer for seperate keys
  mixer3.gain(0,1);
  mixer3.gain(1,1);
  mixer3.gain(2,1);
  mixer3.gain(3,1);
  mixer8.gain(0,1);
  mixer8.gain(1,1);
  mixer8.gain(2,1);
  mixer8.gain(3,1);  
  mixer13.gain(0,1);
  mixer13.gain(1,1);
  mixer13.gain(2,1);
  mixer13.gain(3,1);  
  mixer18.gain(0,1);
  mixer18.gain(1,1);
  mixer18.gain(2,1);
  mixer18.gain(3,1);


  // noise mixers
  mixer1.gain(0,1);     // waveform 
  mixer1.gain(2,0);     // noise
  pink1.amplitude(0.3);
  biquad3.setHighpass(0, 500, 0.5);
  biquad3.setLowpass(1, 2800, 0.5);
  biquad3.setLowpass(2, 3000, 0.4);
  mixer4.gain(0,1);     // waveform modulated
  mixer4.gain(2,0);     // noise
  pink2.amplitude(0.3);
  biquad4.setHighpass(0, 500, 0.5);
  biquad4.setLowpass(1, 2800, 0.5);
  biquad4.setLowpass(2, 3000, 0.4);
  mixer5.gain(0,1);     // waveform modulated
  mixer5.gain(2,0);     // noise
  pink3.amplitude(0.3);
  biquad5.setHighpass(0, 500, 0.5);
  biquad5.setLowpass(1, 2800, 0.5);
  biquad5.setLowpass(2, 3000, 0.4);
  mixer6.gain(0,1);     // waveform modulated
  mixer6.gain(2,0);     // noise
  pink4.amplitude(0.3);
  biquad6.setHighpass(0, 500, 0.5);
  biquad6.setLowpass(1, 2800, 0.5);
  biquad6.setLowpass(2, 3000, 0.4);

  mixer7.gain(0,1);     // waveform 
  mixer7.gain(2,0);     // noise
  pink5.amplitude(0.3);
  biquad7.setHighpass(0, 500, 0.5);
  biquad7.setLowpass(1, 2800, 0.5);
  biquad7.setLowpass(2, 3000, 0.4);
  mixer9.gain(0,1);     // waveform modulated
  mixer9.gain(2,0);     // noise
  pink6.amplitude(0.3);
  biquad8.setHighpass(0, 500, 0.5);
  biquad8.setLowpass(1, 2800, 0.5);
  biquad8.setLowpass(2, 3000, 0.4);
  mixer10.gain(0,1);     // waveform modulated
  mixer10.gain(2,0);     // noise
  pink7.amplitude(0.3);
  biquad9.setHighpass(0, 500, 0.5);
  biquad9.setLowpass(1, 2800, 0.5);
  biquad9.setLowpass(2, 3000, 0.4);
  mixer11.gain(0,1);     // waveform modulated
  mixer11.gain(2,0);     // noise
  pink8.amplitude(0.3);
  biquad10.setHighpass(0, 500, 0.5);
  biquad10.setLowpass(1, 2800, 0.5);
  biquad10.setLowpass(2, 3000, 0.4);

  mixer12.gain(0,1);     // waveform 
  mixer12.gain(2,0);     // noise
  pink9.amplitude(0.3);
  biquad11.setHighpass(0, 500, 0.5);
  biquad11.setLowpass(1, 2800, 0.5);
  biquad11.setLowpass(2, 3000, 0.4);
  mixer14.gain(0,1);     // waveform modulated
  mixer14.gain(2,0);     // noise
  pink10.amplitude(0.3);
  biquad12.setHighpass(0, 500, 0.5);
  biquad12.setLowpass(1, 2800, 0.5);
  biquad12.setLowpass(2, 3000, 0.4);
  mixer15.gain(0,1);     // waveform modulated
  mixer15.gain(2,0);     // noise
  pink11.amplitude(0.3);
  biquad13.setHighpass(0, 500, 0.5);
  biquad13.setLowpass(1, 2800, 0.5);
  biquad13.setLowpass(2, 3000, 0.4);
  mixer16.gain(0,1);     // waveform modulated
  mixer16.gain(2,0);     // noise
  pink12.amplitude(0.3);
  biquad14.setHighpass(0, 500, 0.5);
  biquad14.setLowpass(1, 2800, 0.5);
  biquad14.setLowpass(2, 3000, 0.4);

  mixer17.gain(0,1);     // waveform modulated
  mixer17.gain(2,0);     // noise
  pink13.amplitude(0.3);
  biquad15.setHighpass(0, 500, 0.5);
  biquad15.setLowpass(1, 2800, 0.5);
  biquad15.setLowpass(2, 3000, 0.4);


  // LFO
  waveform1.frequencyModulation(0.2);
  lfo1.begin(1, 1, WAVEFORM_SINE); 
  lfomixer.gain(0,0.1);     
  lfomixer.gain(1,1);  
  waveform2.frequencyModulation(0.2);
  lfo2.begin(1, 1, WAVEFORM_SINE); 
  lfomixer1.gain(0,0.1);     
  lfomixer1.gain(1,1); 
  waveform3.frequencyModulation(0.2);
  lfo3.begin(1, 1, WAVEFORM_SINE); 
  lfomixer2.gain(0,0.1);     
  lfomixer2.gain(1,1); 
  waveform4.frequencyModulation(0.2);
  lfo4.begin(1, 1, WAVEFORM_SINE); 
  lfomixer3.gain(0,0.1);     
  lfomixer3.gain(1,1);  

  waveform5.frequencyModulation(0.2);
  lfo5.begin(1, 1, WAVEFORM_SINE); 
  lfomixer4.gain(0,0.1);     
  lfomixer4.gain(1,1);  
  waveform6.frequencyModulation(0.2);
  lfo6.begin(1, 1, WAVEFORM_SINE); 
  lfomixer5.gain(0,0.1);     
  lfomixer5.gain(1,1); 
  waveform7.frequencyModulation(0.2);
  lfo7.begin(1, 1, WAVEFORM_SINE); 
  lfomixer6.gain(0,0.1);     
  lfomixer6.gain(1,1); 
  waveform8.frequencyModulation(0.2);
  lfo8.begin(1, 1, WAVEFORM_SINE); 
  lfomixer7.gain(0,0.1);     
  lfomixer7.gain(1,1);

  waveform9.frequencyModulation(0.2);
  lfo9.begin(1, 1, WAVEFORM_SINE); 
  lfomixer8.gain(0,0.1);     
  lfomixer8.gain(1,1); 
  waveform10.frequencyModulation(0.2);
  lfo10.begin(1, 1, WAVEFORM_SINE); 
  lfomixer9.gain(0,0.1);     
  lfomixer9.gain(1,1); 
  waveform11.frequencyModulation(0.2);
  lfo11.begin(1, 1, WAVEFORM_SINE); 
  lfomixer10.gain(0,0.1);     
  lfomixer10.gain(1,1); 
  waveform12.frequencyModulation(0.2);
  lfo12.begin(1, 1, WAVEFORM_SINE); 
  lfomixer11.gain(0,0.1);     
  lfomixer11.gain(1,1);

  waveform13.frequencyModulation(0.2);
  lfo13.begin(1, 1, WAVEFORM_SINE);
  lfomixer12.gain(0,0.1); 
  lfomixer12.gain(1,1);



  // reverb
  fdbkmixer.gain(0,0.8);    // pass through
  fdbkmixer.gain(1,0.6);    // feedback
  mixer2.gain(0,0.8);       // note
  mixer2.gain(1,1);         // reverb
  delay1.size(1);
  biquad1.setHighpass(0, 200, 0.5);
  biquad1.setLowpass(0, 3200, 0.5);
  biquad1.setLowpass(0, 4000, 0.5);


  // fray
  sine1.amplitude(1);
  sine1.frequency(4);
  dc1.amplitude(1);

  // output filter
  biquad2.setLowpass(0, 10500, 0.5);

  // encoder
  enc1.begin(0, 0, 24);    // wave 

  // scan pots
  moddepth =  (float) (analogRead(A15) )/ 4095;
  lastmoddepth = moddepth;  
  verb =  (float) (analogRead(A16) )/ 4095;
  lastverb = verb;
  tempecho = verb;
  fray = (float) analogRead(A14) / 4095;
  lastfray = fray;
  
  delay2.delay(0, (500*tempecho)+30);


  pinMode(PIN_A, INPUT_PULLUP);    // INPUT_PULLUP
  pinMode(PIN_B, INPUT_PULLUP);

  // But not for the push switch
  pinMode(PUSH_BTN, INPUT_PULLUP);

}




void loop() {

  // low dropping mod DC
  if(millis() - mssave >= lfotime)
  {
      if(waitdroprise == 2)    // was dropping, now waiting
      {
        lfotime = (rand()% 3000) + 100;
        waitdroprise = 0;
      }
      else if(waitdroprise == 0)              // now dropping
      {
        tempdepth = (float) (rand()%1000) / -1000;
        lfotime = (rand()%100) + 10;
        dc2.amplitude(tempdepth, lfotime);
        dc3.amplitude(tempdepth, lfotime);
        dc4.amplitude(tempdepth, lfotime);
        dc5.amplitude(tempdepth, lfotime);

        dc6.amplitude(tempdepth, lfotime);
        dc7.amplitude(tempdepth, lfotime);
        dc8.amplitude(tempdepth, lfotime);
        dc9.amplitude(tempdepth, lfotime);

        dc10.amplitude(tempdepth, lfotime);
        dc11.amplitude(tempdepth, lfotime);
        dc12.amplitude(tempdepth, lfotime);
        dc13.amplitude(tempdepth, lfotime);

        dc14.amplitude(tempdepth, lfotime);
        waitdroprise = 1;
      }
      else if(waitdroprise == 1)            // now rising
      {
        dc2.amplitude(0, lfotime);
        dc3.amplitude(0, lfotime);
        dc4.amplitude(0, lfotime);
        dc5.amplitude(0, lfotime);
        
        dc6.amplitude(0, lfotime);
        dc7.amplitude(0, lfotime);
        dc8.amplitude(0, lfotime);
        dc9.amplitude(0, lfotime);

        dc10.amplitude(0, lfotime);
        dc11.amplitude(0, lfotime);
        dc12.amplitude(0, lfotime);
        dc13.amplitude(0, lfotime);

        dc14.amplitude(0, lfotime);
        waitdroprise = 2;
      }
      mssave = millis();
  }
  
  domod();

  doecho();

  dolofi();

  if(wave == 1 || wave == 3 || wave == 4 || wave == 5 || wave == 6) 
     dohightoggle();
  else dotoggle();
  
  if(millis() - offtimer > 1000)                                                                                                 // DRAW WAVEFORM
  {
    display.clearDisplay();

    for(int a = 0; a < 128; a++)
    {
      if(!wave) display.drawPixel(a, (piano[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 1) display.drawPixel(a, (cello[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 2) display.drawPixel(a, (bells[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 3) display.drawPixel(a, (vibraphone[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 4) display.drawPixel(a, (eorgan[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 5) display.drawPixel(a, (flute[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 6) display.drawPixel(a, (aguitar[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 7) display.drawPixel(a, (voicey[a*2] + 32768) >> 10  , SSD1306_WHITE);
      
      if(wave == 8) display.drawPixel(a, (granular2[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 9) display.drawPixel(a, (granular3[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 10) display.drawPixel(a, (granular4[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 11) display.drawPixel(a, (granular5[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 12) display.drawPixel(a, (granular6[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 13) display.drawPixel(a, (granular7[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 14) display.drawPixel(a, (overtone[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 15) display.drawPixel(a, (distorted[a*2] + 32768) >> 10  , SSD1306_WHITE);

      if(wave == 16) display.drawPixel(a, (fmsynth1[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 17) display.drawPixel(a, (fmsynth122[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 18) display.drawPixel(a, (noisewave[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 19) display.drawPixel(a, (atari[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 20) display.drawPixel(a, (galaxy[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 21) display.drawPixel(a, (symmetry[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 22) display.drawPixel(a, (brutalist[a*2] + 32768) >> 10  , SSD1306_WHITE);
      if(wave == 23) display.drawPixel(a, (golden[a*2] + 32768) >> 10  , SSD1306_WHITE);
      
      
    }
    
    display.display();  
  }





  
//  wave = (analogRead(A16) >> 9) ;
    if (enc1.available()) 
    {
      wave = enc1.read();
      if(wave == 24) wave = 23;     // knock off extra position
    }


  
  if(!wave)                                   // PIANO
  {
    attck = 10;
    hld = 10;
    dcy = 30;
    sstn = 0.4;
    rls = 600;
    rlsn = 0;
    waveform1.arbitraryWaveform(piano, 172.0); waveform2.arbitraryWaveform(piano, 172.0); waveform3.arbitraryWaveform(piano, 172.0); waveform4.arbitraryWaveform(piano, 172.0);

    waveform5.arbitraryWaveform(piano, 172.0); waveform6.arbitraryWaveform(piano, 172.0); waveform7.arbitraryWaveform(piano, 172.0); waveform8.arbitraryWaveform(piano, 172.0);   
    waveform9.arbitraryWaveform(piano, 172.0); waveform10.arbitraryWaveform(piano, 172.0); waveform11.arbitraryWaveform(piano, 172.0); waveform12.arbitraryWaveform(piano, 172.0);
    waveform13.arbitraryWaveform(piano, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(35, 25);         
      display.println("piano");
      display.display();
      lastwave = wave;
      offtimer = millis();
      lowpitchchange();
    }    
  }
  else if (wave == 1)                         // CELLO
  {
    attck = 500;
    hld = 10;
    dcy = 10;
    sstn = 0.95;
    rls = 500;
    rlsn = 5;
    waveform1.arbitraryWaveform(cello, 172.0); waveform2.arbitraryWaveform(cello, 172.0); waveform3.arbitraryWaveform(cello, 172.0); waveform4.arbitraryWaveform(cello, 172.0);

    waveform5.arbitraryWaveform(cello, 172.0); waveform6.arbitraryWaveform(cello, 172.0); waveform7.arbitraryWaveform(cello, 172.0); waveform8.arbitraryWaveform(cello, 172.0);   
    waveform9.arbitraryWaveform(cello, 172.0); waveform10.arbitraryWaveform(cello, 172.0); waveform11.arbitraryWaveform(cello, 172.0); waveform12.arbitraryWaveform(cello, 172.0);
    waveform13.arbitraryWaveform(cello, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(35, 25);         
      display.println("cello");
      display.display();
      lastwave = wave;
      offtimer = millis();
      highpitchchange();
    }
  }
  else if (wave == 2)                          // bells
  {
    attck = 2;
    hld = 300;
    dcy = 200;
    sstn = 0.7;
    rls = 600;
    rlsn = 5;
    waveform1.arbitraryWaveform(bells, 172.0); waveform2.arbitraryWaveform(bells, 172.0); waveform3.arbitraryWaveform(bells, 172.0); waveform4.arbitraryWaveform(bells, 172.0);

    waveform5.arbitraryWaveform(bells, 172.0); waveform6.arbitraryWaveform(bells, 172.0); waveform7.arbitraryWaveform(bells, 172.0); waveform8.arbitraryWaveform(bells, 172.0);   
    waveform9.arbitraryWaveform(bells, 172.0); waveform10.arbitraryWaveform(bells, 172.0); waveform11.arbitraryWaveform(bells, 172.0); waveform12.arbitraryWaveform(bells, 172.0);
    waveform13.arbitraryWaveform(bells, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(35, 25);         
      display.println("bells");
      display.display();
      lastwave = wave;
      offtimer = millis();
      lowpitchchange();
    }
  }
  else if (wave == 3)                           // vibe
  {
    attck = 10;
    hld = 25;
    dcy = 15;
    sstn = 0.8;
    rls = 400;
   
    waveform1.arbitraryWaveform(vibraphone, 172.0); waveform2.arbitraryWaveform(vibraphone, 172.0); waveform3.arbitraryWaveform(vibraphone, 172.0); waveform4.arbitraryWaveform(vibraphone, 172.0);

    waveform5.arbitraryWaveform(vibraphone, 172.0); waveform6.arbitraryWaveform(vibraphone, 172.0); waveform7.arbitraryWaveform(vibraphone, 172.0); waveform8.arbitraryWaveform(vibraphone, 172.0);   
    waveform9.arbitraryWaveform(vibraphone, 172.0); waveform10.arbitraryWaveform(vibraphone, 172.0); waveform11.arbitraryWaveform(vibraphone, 172.0); waveform12.arbitraryWaveform(vibraphone, 172.0);
    waveform13.arbitraryWaveform(vibraphone, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(6, 25);         
      display.println("vibraphone");
      display.display();
      lastwave = wave;
      offtimer = millis();
      highpitchchange();
    }
  }
  else if (wave == 4)                                 // ORGAN
  {
    attck = 5;
    hld = 10;
    dcy = 50;
    sstn = 0.4;
    rls = 300;
    
    waveform1.arbitraryWaveform(eorgan, 172.0); waveform2.arbitraryWaveform(eorgan, 172.0); waveform3.arbitraryWaveform(eorgan, 172.0); waveform4.arbitraryWaveform(eorgan, 172.0);

    waveform5.arbitraryWaveform(eorgan, 172.0); waveform6.arbitraryWaveform(eorgan, 172.0); waveform7.arbitraryWaveform(eorgan, 172.0); waveform8.arbitraryWaveform(eorgan, 172.0);   
    waveform9.arbitraryWaveform(eorgan, 172.0); waveform10.arbitraryWaveform(eorgan, 172.0); waveform11.arbitraryWaveform(eorgan, 172.0); waveform12.arbitraryWaveform(eorgan, 172.0);
    waveform13.arbitraryWaveform(eorgan, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(35, 25);         
      display.println("organ");
      display.display();
      lastwave = wave;
      offtimer = millis();
      highpitchchange();
    }
  }
  else if (wave == 5)                    // clarinet actually
  {
    attck = 20;
    hld = 50;
    dcy = 50;
    sstn = 0.85;
    rls = 100;
   
    waveform1.arbitraryWaveform(flute, 172.0); waveform2.arbitraryWaveform(flute, 172.0); waveform3.arbitraryWaveform(flute, 172.0); waveform4.arbitraryWaveform(flute, 172.0);   // granular

    waveform5.arbitraryWaveform(flute, 172.0); waveform6.arbitraryWaveform(flute, 172.0); waveform7.arbitraryWaveform(flute, 172.0); waveform8.arbitraryWaveform(flute, 172.0);   
    waveform9.arbitraryWaveform(flute, 172.0); waveform10.arbitraryWaveform(flute, 172.0); waveform11.arbitraryWaveform(flute, 172.0); waveform12.arbitraryWaveform(flute, 172.0);
    waveform13.arbitraryWaveform(flute, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(17, 25);         
      display.println("clarinet"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
      highpitchchange();
    }
  }
  else if (wave == 6) // a guitar 
  {
    attck = 2;
    hld = 0;
    dcy = 400;
    sstn = 0.55;
    rls = 400;
   


    waveform1.arbitraryWaveform(aguitar, 172.0); waveform2.arbitraryWaveform(aguitar, 172.0); waveform3.arbitraryWaveform(aguitar, 172.0); waveform4.arbitraryWaveform(aguitar, 172.0);

    waveform5.arbitraryWaveform(aguitar, 172.0); waveform6.arbitraryWaveform(aguitar, 172.0); waveform7.arbitraryWaveform(aguitar, 172.0); waveform8.arbitraryWaveform(aguitar, 172.0);   
    waveform9.arbitraryWaveform(aguitar, 172.0); waveform10.arbitraryWaveform(aguitar, 172.0); waveform11.arbitraryWaveform(aguitar, 172.0); waveform12.arbitraryWaveform(aguitar, 172.0);
    waveform13.arbitraryWaveform(aguitar, 172.0);
    
    doenvelope(); 
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(28, 25);          // 17 for overtone
      display.println("guitar");
      display.display();
      lastwave = wave;
      offtimer = millis();
      highpitchchange();
    }   
  }
  else if (wave == 7)                     // voice
  {
    attck = 25;
    hld = 100;
    dcy = 15;
    sstn = 0.7;
    rls = 15;
 
    waveform1.arbitraryWaveform(voicey, 172.0); waveform2.arbitraryWaveform(voicey, 172.0); waveform3.arbitraryWaveform(voicey, 172.0); waveform4.arbitraryWaveform(voicey, 172.0);

    waveform5.arbitraryWaveform(voicey, 172.0); waveform6.arbitraryWaveform(voicey, 172.0); waveform7.arbitraryWaveform(voicey, 172.0); waveform8.arbitraryWaveform(voicey, 172.0);   
    waveform9.arbitraryWaveform(voicey, 172.0); waveform10.arbitraryWaveform(voicey, 172.0); waveform11.arbitraryWaveform(voicey, 172.0); waveform12.arbitraryWaveform(voicey, 172.0);
    waveform13.arbitraryWaveform(voicey, 172.0);
    
    doenvelope();   
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(36, 25);         
      display.println("voice");
      display.setCursor(24, 30);  
      display.display();
      lastwave = wave;
      offtimer = millis();
      lowpitchchange();
    }
  }

  else if (wave == 8)                 //  SYNTHS
  {
    attck = 30;
    hld = 60;
    dcy = 30;
    sstn = 0.5;
    rls = 30;

    waveform1.arbitraryWaveform(granular2, 172.0); waveform2.arbitraryWaveform(granular2, 172.0); waveform3.arbitraryWaveform(granular2, 172.0); waveform4.arbitraryWaveform(granular2, 172.0);   // granular

    waveform5.arbitraryWaveform(granular2, 172.0); waveform6.arbitraryWaveform(granular2, 172.0); waveform7.arbitraryWaveform(granular2, 172.0); waveform8.arbitraryWaveform(granular2, 172.0);   
    waveform9.arbitraryWaveform(granular2, 172.0); waveform10.arbitraryWaveform(granular2, 172.0); waveform11.arbitraryWaveform(granular2, 172.0); waveform12.arbitraryWaveform(granular2, 172.0);
    waveform13.arbitraryWaveform(granular2, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(28, 25);         
      display.println("tulips"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
      lowpitchchange();
    }
  }
  else if (wave == 9) 
  {
    attck = 10;
    hld = 10;
    dcy = 5;
    sstn = 0.65;
    rls = 50;
   
    waveform1.arbitraryWaveform(granular3, 172.0); waveform2.arbitraryWaveform(granular3, 172.0); waveform3.arbitraryWaveform(granular3, 172.0); waveform4.arbitraryWaveform(granular3, 172.0);   // granular

    waveform5.arbitraryWaveform(granular3, 172.0); waveform6.arbitraryWaveform(granular3, 172.0); waveform7.arbitraryWaveform(granular3, 172.0); waveform8.arbitraryWaveform(granular3, 172.0);   
    waveform9.arbitraryWaveform(granular3, 172.0); waveform10.arbitraryWaveform(granular3, 172.0); waveform11.arbitraryWaveform(granular3, 172.0); waveform12.arbitraryWaveform(granular3, 172.0);
    waveform13.arbitraryWaveform(granular3, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(25, 25);         
      display.println("kubrick"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
      lowpitchchange();
    }
  }
  else if (wave == 10) 
  {
    attck = 25;
    hld = 0;
    dcy = 20;
    sstn = 0.55;
    rls = 20;

    waveform1.arbitraryWaveform(granular4, 172.0); waveform2.arbitraryWaveform(granular4, 172.0); waveform3.arbitraryWaveform(granular4, 172.0); waveform4.arbitraryWaveform(granular4, 172.0);   // granular

    waveform5.arbitraryWaveform(granular4, 172.0); waveform6.arbitraryWaveform(granular4, 172.0); waveform7.arbitraryWaveform(granular4, 172.0); waveform8.arbitraryWaveform(granular4, 172.0);   
    waveform9.arbitraryWaveform(granular4, 172.0); waveform10.arbitraryWaveform(granular4, 172.0); waveform11.arbitraryWaveform(granular4, 172.0); waveform12.arbitraryWaveform(granular4, 172.0);
    waveform13.arbitraryWaveform(granular4, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(35, 25);         
      display.println("robot"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
      lowpitchchange();
    }
  }
  else if (wave == 11) 
  {
    attck = 2;
    hld = 15;
    dcy = 20;
    sstn = 0.62;
    rls = 250;
    
    waveform1.arbitraryWaveform(granular5, 172.0); waveform2.arbitraryWaveform(granular5, 172.0); waveform3.arbitraryWaveform(granular5, 172.0); waveform4.arbitraryWaveform(granular5, 172.0);   // granular

    waveform5.arbitraryWaveform(granular5, 172.0); waveform6.arbitraryWaveform(granular5, 172.0); waveform7.arbitraryWaveform(granular5, 172.0); waveform8.arbitraryWaveform(granular5, 172.0);   
    waveform9.arbitraryWaveform(granular5, 172.0); waveform10.arbitraryWaveform(granular5, 172.0); waveform11.arbitraryWaveform(granular5, 172.0); waveform12.arbitraryWaveform(granular5, 172.0);
    waveform13.arbitraryWaveform(granular5, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(30, 25);         
      display.println("harpsy"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }
    else if (wave == 12) 
  {
    attck = 25;
    hld = 50;
    dcy = 20;
    sstn = 0.6;
    rls = 100;
   
    waveform1.arbitraryWaveform(granular6, 172.0); waveform2.arbitraryWaveform(granular6, 172.0); waveform3.arbitraryWaveform(granular6, 172.0); waveform4.arbitraryWaveform(granular6, 172.0);   // granular

    waveform5.arbitraryWaveform(granular6, 172.0); waveform6.arbitraryWaveform(granular6, 172.0); waveform7.arbitraryWaveform(granular6, 172.0); waveform8.arbitraryWaveform(granular6, 172.0);   
    waveform9.arbitraryWaveform(granular6, 172.0); waveform10.arbitraryWaveform(granular6, 172.0); waveform11.arbitraryWaveform(granular6, 172.0); waveform12.arbitraryWaveform(granular6, 172.0);
    waveform13.arbitraryWaveform(granular6, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(23, 25);         
      display.println("triumph"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }

  else if (wave == 13) 
  {
    attck = 120;
    hld = 0;
    dcy = 20;
    sstn = 0.45;
    rls = 200;

    waveform1.arbitraryWaveform(granular7, 172.0); waveform2.arbitraryWaveform(granular7, 172.0); waveform3.arbitraryWaveform(granular7, 172.0); waveform4.arbitraryWaveform(granular7, 172.0);   // granular

    waveform5.arbitraryWaveform(granular7, 172.0); waveform6.arbitraryWaveform(granular7, 172.0); waveform7.arbitraryWaveform(granular7, 172.0); waveform8.arbitraryWaveform(granular7, 172.0);   
    waveform9.arbitraryWaveform(granular7, 172.0); waveform10.arbitraryWaveform(granular7, 172.0); waveform11.arbitraryWaveform(granular7, 172.0); waveform12.arbitraryWaveform(granular7, 172.0);
    waveform13.arbitraryWaveform(granular7, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(35, 25);         
      display.println("chirp"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }

  else if (wave == 14) 
  {

    waveform1.arbitraryWaveform(overtone, 172.0); waveform2.arbitraryWaveform(overtone, 172.0); waveform3.arbitraryWaveform(overtone, 172.0); waveform4.arbitraryWaveform(overtone, 172.0);   // granular

    waveform5.arbitraryWaveform(overtone, 172.0); waveform6.arbitraryWaveform(overtone, 172.0); waveform7.arbitraryWaveform(overtone, 172.0); waveform8.arbitraryWaveform(overtone, 172.0);   
    waveform9.arbitraryWaveform(overtone, 172.0); waveform10.arbitraryWaveform(overtone, 172.0); waveform11.arbitraryWaveform(overtone, 172.0); waveform12.arbitraryWaveform(overtone, 172.0);
    waveform13.arbitraryWaveform(overtone, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(10, 25);         
      display.println("telephone"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }

  else if (wave == 15) 
  {

    waveform1.arbitraryWaveform(distorted, 172.0); waveform2.arbitraryWaveform(distorted, 172.0); waveform3.arbitraryWaveform(distorted, 172.0); waveform4.arbitraryWaveform(distorted, 172.0);   // granular

    waveform5.arbitraryWaveform(distorted, 172.0); waveform6.arbitraryWaveform(distorted, 172.0); waveform7.arbitraryWaveform(distorted, 172.0); waveform8.arbitraryWaveform(distorted, 172.0);   
    waveform9.arbitraryWaveform(distorted, 172.0); waveform10.arbitraryWaveform(distorted, 172.0); waveform11.arbitraryWaveform(distorted, 172.0); waveform12.arbitraryWaveform(distorted, 172.0);
    waveform13.arbitraryWaveform(distorted, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(10, 25);         
      display.println("distorted"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }
  

  else if (wave == 16) 
  {

    waveform1.arbitraryWaveform(fmsynth1, 172.0); waveform2.arbitraryWaveform(fmsynth1, 172.0); waveform3.arbitraryWaveform(fmsynth1, 172.0); waveform4.arbitraryWaveform(fmsynth1, 172.0);   // granular

    waveform5.arbitraryWaveform(fmsynth1, 172.0); waveform6.arbitraryWaveform(fmsynth1, 172.0); waveform7.arbitraryWaveform(fmsynth1, 172.0); waveform8.arbitraryWaveform(fmsynth1, 172.0);   
    waveform9.arbitraryWaveform(fmsynth1, 172.0); waveform10.arbitraryWaveform(fmsynth1, 172.0); waveform11.arbitraryWaveform(fmsynth1, 172.0); waveform12.arbitraryWaveform(fmsynth1, 172.0);
    waveform13.arbitraryWaveform(fmsynth1, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(21, 25);         
      display.println("fmsynth"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }



  else if (wave == 17) 
  {
    attck = 100;
    hld = 0;
    dcy = 100;
    sstn = 0.5;
    rls = 200;
   
    waveform1.arbitraryWaveform(fmsynth122, 172.0); waveform2.arbitraryWaveform(fmsynth122, 172.0); waveform3.arbitraryWaveform(fmsynth122, 172.0); waveform4.arbitraryWaveform(fmsynth122, 172.0);   // granular

    waveform5.arbitraryWaveform(fmsynth122, 172.0); waveform6.arbitraryWaveform(fmsynth122, 172.0); waveform7.arbitraryWaveform(fmsynth122, 172.0); waveform8.arbitraryWaveform(fmsynth122, 172.0);   
    waveform9.arbitraryWaveform(fmsynth122, 172.0); waveform10.arbitraryWaveform(fmsynth122, 172.0); waveform11.arbitraryWaveform(fmsynth122, 172.0); waveform12.arbitraryWaveform(fmsynth122, 172.0);
    waveform13.arbitraryWaveform(fmsynth122, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(35, 25);         
      display.println("water"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }

  else if (wave == 18) 
  {
    attck = 10;
    hld = 0;
    dcy = 100;
    sstn = 1;
    rls = 50;
  
    waveform1.arbitraryWaveform(noisewave, 172.0); waveform2.arbitraryWaveform(noisewave, 172.0); waveform3.arbitraryWaveform(noisewave, 172.0); waveform4.arbitraryWaveform(noisewave, 172.0);   // granular

    waveform5.arbitraryWaveform(noisewave, 172.0); waveform6.arbitraryWaveform(noisewave, 172.0); waveform7.arbitraryWaveform(noisewave, 172.0); waveform8.arbitraryWaveform(noisewave, 172.0);   
    waveform9.arbitraryWaveform(noisewave, 172.0); waveform10.arbitraryWaveform(noisewave, 172.0); waveform11.arbitraryWaveform(noisewave, 172.0); waveform12.arbitraryWaveform(noisewave, 172.0);
    waveform13.arbitraryWaveform(noisewave, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(35, 25);         
      display.println("noise"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }




  else if (wave == 19) 
  {
    attck = 0;
    hld = 0;
    dcy = 0;
    sstn = 1;
    rls = 0;

    waveform1.arbitraryWaveform(atari, 172.0); waveform2.arbitraryWaveform(atari, 172.0); waveform3.arbitraryWaveform(atari, 172.0); waveform4.arbitraryWaveform(atari, 172.0);   // granular

    waveform5.arbitraryWaveform(atari, 172.0); waveform6.arbitraryWaveform(atari, 172.0); waveform7.arbitraryWaveform(atari, 172.0); waveform8.arbitraryWaveform(atari, 172.0);   
    waveform9.arbitraryWaveform(atari, 172.0); waveform10.arbitraryWaveform(atari, 172.0); waveform11.arbitraryWaveform(atari, 172.0); waveform12.arbitraryWaveform(atari, 172.0);
    waveform13.arbitraryWaveform(atari, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(35, 25);         
      display.println("atari"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }
  

  else if (wave == 20) 
  {
    attck = 40;
    hld = 25;
    dcy = 25;
    sstn = 1;
    rls = 500;

    waveform1.arbitraryWaveform(galaxy, 172.0); waveform2.arbitraryWaveform(galaxy, 172.0); waveform3.arbitraryWaveform(galaxy, 172.0); waveform4.arbitraryWaveform(galaxy, 172.0);   // granular

    waveform5.arbitraryWaveform(galaxy, 172.0); waveform6.arbitraryWaveform(galaxy, 172.0); waveform7.arbitraryWaveform(galaxy, 172.0); waveform8.arbitraryWaveform(galaxy, 172.0);   
    waveform9.arbitraryWaveform(galaxy, 172.0); waveform10.arbitraryWaveform(galaxy, 172.0); waveform11.arbitraryWaveform(galaxy, 172.0); waveform12.arbitraryWaveform(galaxy, 172.0);
    waveform13.arbitraryWaveform(galaxy, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(28, 25);         
      display.println("galaxy"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }
  
  else if (wave == 21) 
  {
    attck = 10;
    hld = 0;
    dcy = 20;
    sstn = 0.55;
    rls = 50;

    waveform1.arbitraryWaveform(symmetry, 172.0); waveform2.arbitraryWaveform(symmetry, 172.0); waveform3.arbitraryWaveform(symmetry, 172.0); waveform4.arbitraryWaveform(symmetry, 172.0);   // granular

    waveform5.arbitraryWaveform(symmetry, 172.0); waveform6.arbitraryWaveform(symmetry, 172.0); waveform7.arbitraryWaveform(symmetry, 172.0); waveform8.arbitraryWaveform(symmetry, 172.0);   
    waveform9.arbitraryWaveform(symmetry, 172.0); waveform10.arbitraryWaveform(symmetry, 172.0); waveform11.arbitraryWaveform(symmetry, 172.0); waveform12.arbitraryWaveform(symmetry, 172.0);
    waveform13.arbitraryWaveform(symmetry, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(17, 25);         
      display.println("symmetry"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }

  else if (wave == 22) 
  {
    attck = 20;
    hld = 20;
    dcy = 20;
    sstn = 0.7;
    rls = 50;

    waveform1.arbitraryWaveform(brutalist, 172.0); waveform2.arbitraryWaveform(brutalist, 172.0); waveform3.arbitraryWaveform(brutalist, 172.0); waveform4.arbitraryWaveform(brutalist, 172.0);   // granular

    waveform5.arbitraryWaveform(brutalist, 172.0); waveform6.arbitraryWaveform(brutalist, 172.0); waveform7.arbitraryWaveform(brutalist, 172.0); waveform8.arbitraryWaveform(brutalist, 172.0);   
    waveform9.arbitraryWaveform(brutalist, 172.0); waveform10.arbitraryWaveform(brutalist, 172.0); waveform11.arbitraryWaveform(brutalist, 172.0); waveform12.arbitraryWaveform(brutalist, 172.0);
    waveform13.arbitraryWaveform(brutalist, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(13, 25);         
      display.println("brutalist"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }

  else if (wave == 23) 
  {
    attck = 20;
    hld = 20;
    dcy = 20;
    sstn = 0.7;
    rls = 50;

    waveform1.arbitraryWaveform(golden, 172.0); waveform2.arbitraryWaveform(golden, 172.0); waveform3.arbitraryWaveform(golden, 172.0); waveform4.arbitraryWaveform(golden, 172.0);   // granular

    waveform5.arbitraryWaveform(golden, 172.0); waveform6.arbitraryWaveform(golden, 172.0); waveform7.arbitraryWaveform(golden, 172.0); waveform8.arbitraryWaveform(golden, 172.0);   
    waveform9.arbitraryWaveform(golden, 172.0); waveform10.arbitraryWaveform(golden, 172.0); waveform11.arbitraryWaveform(golden, 172.0); waveform12.arbitraryWaveform(golden, 172.0);
    waveform13.arbitraryWaveform(golden, 172.0);
    
    doenvelope();
    if(lastwave != wave)
    {
      display.clearDisplay();
      display.setCursor(29, 25);         
      display.println("golden"); 
      display.display();
      lastwave = wave;
      offtimer = millis();
    }
  }




    // key presses
  D0.update();  D1.update();  D2.update();  D3.update();    
  D4.update();  D5.update();  D6.update();  D7.update(); 
  D8.update();  D9.update();  D10.update();  D11.update(); 
  D12.update(); 
  
  if(D0.read() == LOW && !keystate0)
  {
    envelope1.noteOn();
    keystate0 = 1;
  }
  else if(D0.read() == HIGH && keystate0)
  {   
    envelope1.noteOff();
    keystate0 = 0;
  }
  if(D1.read() == LOW && !keystate1)
  {
    envelope2.noteOn();
    keystate1 = 1;
  }
  else if(D1.read() == HIGH && keystate1)
  {
    envelope2.noteOff();
    keystate1 = 0;
  }
  if(D2.read() == LOW && !keystate2)
  {
    envelope3.noteOn();
    keystate2 = 1;
  }
  else if(D2.read() == HIGH && keystate2)
  {
    envelope3.noteOff();
    keystate2 = 0;
  }
  if(D3.read() == LOW && !keystate3)
  {
    envelope4.noteOn();
    keystate3 = 1;
  }
  else if(D3.read() == HIGH && keystate3)
  {
    envelope4.noteOff();
    keystate3 = 0;
  }



  if(D4.read() == LOW && !keystate4)
  {
    envelope5.noteOn();
    keystate4 = 1;
  }
  else if(D4.read() == HIGH && keystate4)
  {   
    envelope5.noteOff();
    keystate4 = 0;
  }
  if(D5.read() == LOW && !keystate5)
  {
    envelope6.noteOn();
    keystate5 = 1;
  }
  else if(D5.read() == HIGH && keystate5)
  {
    envelope6.noteOff();
    keystate5 = 0;
  }
  if(D6.read() == LOW && !keystate6)
  {
    envelope7.noteOn();
    keystate6 = 1;
  }
  else if(D6.read() == HIGH && keystate6)
  {
    envelope7.noteOff();
    keystate6 = 0;
  }
  if(D7.read() == LOW && !keystate7)
  {
    envelope8.noteOn();
    keystate7 = 1;
  }
  else if(D7.read() == HIGH && keystate7)
  {
    envelope8.noteOff();
    keystate7 = 0;
  }



  if(D8.read() == LOW && !keystate8)
  {
    envelope9.noteOn();
    keystate8 = 1;
  }
  else if(D8.read() == HIGH && keystate8)
  {   
    envelope9.noteOff();
    keystate8 = 0;
  }
  if(D9.read() == LOW && !keystate9)
  {
    envelope10.noteOn();
    keystate9 = 1;
  }
  else if(D9.read() == HIGH && keystate9)
  {
    envelope10.noteOff();
    keystate9 = 0;
  }
  if(D10.read() == LOW && !keystate10)
  {
    envelope11.noteOn();
    keystate10 = 1;
  }
  else if(D10.read() == HIGH && keystate10)
  {
    envelope11.noteOff();
    keystate10 = 0;
  }
  if(D11.read() == LOW && !keystate11)
  {
    envelope12.noteOn();
    keystate11 = 1;
  }
  else if(D11.read() == HIGH && keystate11)
  {
    envelope12.noteOff();
    keystate11 = 0;
  }

  if(D12.read() == LOW && !keystate12)
  {
    envelope13.noteOn();
    keystate12 = 1;
  }

  else if(D12.read() == HIGH && keystate12)
  {
    envelope13.noteOff();
    keystate12 = 0;
  }







  
}     // LOOP END












void doenvelope()
{
  
    envelope1.attack(attck); envelope2.attack(attck); envelope3.attack(attck);envelope4.attack(attck);

    envelope5.attack(attck); envelope6.attack(attck); envelope7.attack(attck);envelope8.attack(attck);  
    envelope9.attack(attck); envelope10.attack(attck); envelope11.attack(attck);envelope12.attack(attck);
    envelope13.attack(attck);
    
    envelope1.hold(hld); envelope2.hold(hld);envelope3.hold(hld); envelope4.hold(hld);

    envelope5.hold(hld); envelope6.hold(hld);envelope7.hold(hld); envelope8.hold(hld);
    envelope9.hold(hld); envelope10.hold(hld);envelope11.hold(hld); envelope12.hold(hld);
    envelope13.hold(hld);
    
    envelope1.decay(dcy); envelope2.decay(dcy); envelope3.decay(dcy); envelope4.decay(dcy);

    envelope5.decay(dcy); envelope6.decay(dcy); envelope7.decay(dcy); envelope8.decay(dcy);
    envelope9.decay(dcy); envelope10.decay(dcy); envelope11.decay(dcy); envelope12.decay(dcy);
    envelope13.decay(dcy);
    
    envelope1.sustain(sstn); envelope2.sustain(sstn); envelope3.sustain(sstn); envelope4.sustain(sstn);

    envelope5.sustain(sstn); envelope6.sustain(sstn); envelope7.sustain(sstn); envelope8.sustain(sstn);
    envelope9.sustain(sstn); envelope10.sustain(sstn); envelope11.sustain(sstn); envelope12.sustain(sstn);
    envelope13.sustain(sstn);

    envelope1.release(rls); envelope2.release(rls); envelope3.release(rls); envelope4.release(rls);

    envelope5.release(rls); envelope6.release(rls); envelope7.release(rls); envelope8.release(rls);
    envelope9.release(rls); envelope10.release(rls); envelope11.release(rls); envelope12.release(rls);
    envelope13.release(rls);
    
    envelope1.releaseNoteOn(rlsn); envelope2.releaseNoteOn(rlsn); envelope3.releaseNoteOn(rlsn); envelope4.releaseNoteOn(rlsn); 

    envelope5.releaseNoteOn(rlsn); envelope6.releaseNoteOn(rlsn); envelope7.releaseNoteOn(rlsn); envelope8.releaseNoteOn(rlsn); 
    envelope9.releaseNoteOn(rlsn); envelope10.releaseNoteOn(rlsn); envelope11.releaseNoteOn(rlsn); envelope12.releaseNoteOn(rlsn); 
    envelope13.releaseNoteOn(rlsn); 
}
