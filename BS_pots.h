


void domod()
{
   moddepth = (float) (analogRead(A15) )/ 4095;
  
  if(moddepth < 0.6 && moddepth > 0.4) {vibeofftape = 1;  lfomixer.gain(1, 0);lfomixer1.gain(1, 0);lfomixer2.gain(1, 0);lfomixer3.gain(1, 0);   lfomixer4.gain(1, 0);lfomixer5.gain(1, 0);lfomixer6.gain(1, 0);lfomixer7.gain(1, 0); lfomixer8.gain(1, 0);lfomixer9.gain(1, 0);lfomixer10.gain(1, 0);lfomixer11.gain(1, 0);   lfomixer12.gain(1, 0);             
                                                          lfo1.amplitude(0);lfo2.amplitude(0);lfo3.amplitude(0);lfo4.amplitude(0);              lfo5.amplitude(0);lfo6.amplitude(0);lfo7.amplitude(0);lfo8.amplitude(0);              lfo9.amplitude(0);lfo10.amplitude(0);lfo11.amplitude(0);lfo12.amplitude(0);                lfo13.amplitude(0);              }
  else if (moddepth >= 0.6)                            // tape
  {
      tempdepth = (moddepth * 2.5) - 1.5;
      vibeofftape = 2;
      lfomixer.gain(1, tempdepth);
      lfo1.amplitude(tempdepth);
      lfomixer1.gain(1, tempdepth);
      lfo2.amplitude(tempdepth);
      lfomixer2.gain(1, tempdepth);
      lfo3.amplitude(tempdepth);
      lfomixer3.gain(1, tempdepth);
      lfo4.amplitude(tempdepth);

      lfomixer4.gain(1, tempdepth);
      lfo5.amplitude(tempdepth);
      lfomixer5.gain(1, tempdepth);
      lfo6.amplitude(tempdepth);
      lfomixer6.gain(1, tempdepth);
      lfo7.amplitude(tempdepth);
      lfomixer7.gain(1, tempdepth);
      lfo8.amplitude(tempdepth);

      lfomixer8.gain(1, tempdepth);
      lfo9.amplitude(tempdepth);
      lfomixer9.gain(1, tempdepth);
      lfo10.amplitude(tempdepth);
      lfomixer10.gain(1, tempdepth);
      lfo11.amplitude(tempdepth);
      lfomixer11.gain(1, tempdepth);
      lfo12.amplitude(tempdepth);

      lfomixer12.gain(1, tempdepth);
      lfo13.amplitude(tempdepth);
      lfo1.frequency(1); lfo2.frequency(1); lfo3.frequency(1); lfo4.frequency(1);     lfo5.frequency(1); lfo6.frequency(1); lfo7.frequency(1); lfo8.frequency(1);     lfo9.frequency(1); lfo10.frequency(1); lfo11.frequency(1); lfo12.frequency(1);   lfo13.frequency(1);
  }
  else if (moddepth <= 0.4)                          //vibe
  {
    tempdepth = (0.4 - moddepth) * 2.5;
    vibeofftape = 0;
    lfomixer.gain(1,0); lfomixer1.gain(1,0);  lfomixer2.gain(1,0);  lfomixer3.gain(1,0);  lfomixer4.gain(1,0); lfomixer5.gain(1,0);  lfomixer6.gain(1,0);  lfomixer7.gain(1,0);      lfomixer8.gain(1,0); lfomixer9.gain(1,0);  lfomixer10.gain(1,0);  lfomixer11.gain(1,0);  lfomixer12.gain(1,0); 
    
    lfo1.amplitude(tempdepth*1.5); lfo2.amplitude(tempdepth*1.5); lfo3.amplitude(tempdepth*1.5); lfo4.amplitude(tempdepth*1.5);     lfo5.amplitude(tempdepth*1.5); lfo6.amplitude(tempdepth*1.5); lfo7.amplitude(tempdepth*1.5); lfo8.amplitude(tempdepth*1.5);   lfo9.amplitude(tempdepth*1.5); lfo10.amplitude(tempdepth*1.5); lfo11.amplitude(tempdepth*1.5); lfo12.amplitude(tempdepth*1.5);   lfo13.amplitude(tempdepth*1.5);
    lfo1.frequency(5); lfo2.frequency(5); lfo3.frequency(5); lfo4.frequency(5);     lfo5.frequency(5); lfo6.frequency(5); lfo7.frequency(5); lfo8.frequency(5); lfo9.frequency(5); lfo10.frequency(5); lfo11.frequency(5); lfo12.frequency(5);   lfo13.frequency(5);
  }
  if(abs(lastmoddepth - moddepth) > 0.007)
  {  
    display.clearDisplay();
    display.setCursor(24,10);         
    if(!vibeofftape)  { display.println(F("vibe = "));display.setCursor(24, 30); percent = tempdepth*100; display.println(percent);  display.setCursor(62, 30); display.println(F("%"));} 
    else if(vibeofftape == 2) { display.println(F("tape = "));display.setCursor(24, 30); percent = tempdepth*100; display.println(percent);  display.setCursor(62, 30); display.println(F("%"));} 
    else { display.setCursor(16, 25); display.println(F("mod off"));}
    display.display();    
    lastmoddepth = moddepth; 
    offtimer = millis();
  }
}






void doecho()
{
                                               
  verb = (float) analogRead(A16) / 4095;

  if (verb < 0.6 && verb > 0.4) {delayoffverb = 1; mixer2.gain(1,0);mixer2.gain(2,0);  }
  
  else if (verb >= 0.6)                     // verb
  {
      tempecho = (verb * 2.5) - 1.5;
      fdbkmixer.gain(1,tempecho);               // feedback      
      mixer2.gain(1,tempecho+0.2);                  // verb vol
      mixer2.gain(2,0);                         // delay vol
      delayoffverb = 2;
  }
  else if (verb <= 0.4)                     // delay
  {
      tempecho = (0.4 - verb) * 2.5;
      fdbkmixer.gain(1,0.6);                    // feedback      
      mixer2.gain(1,0);                         // verb vol
      mixer2.gain(2,0.75);                         // delay vol
      
      delayoffverb = 0;      
  }
  
  if(abs(lastverb - verb) > 0.007)
  {
    display.clearDisplay();
    display.setCursor(24, 10);         
    if(!delayoffverb)  {delay2.delay(0, (500*tempecho)+30); display.println("delay = ");display.setCursor(24, 30);  percent = tempecho*100; display.println(percent);  display.setCursor(62, 30); display.println("%");} 
    else if(delayoffverb == 2) { display.println("reverb = ");display.setCursor(24, 30); percent = tempecho*100; display.println(percent);  display.setCursor(62, 30); display.println("%");} 
    else { display.setCursor(16, 25); display.println("echo off");};
    display.display(); 
    lastverb = verb ; 
    offtimer = millis();
  }
}



void dolofi()
{
  
  fray =   (float) analogRead(A14) / 4095;
  if(fray < 0.6 && fray > 0.4) {noiseoffburn = 1; fraymixer.gain(0, 1); fraymixer.gain(1, 0);   mixer1.gain(2, 0); mixer4.gain(2, 0); mixer5.gain(2, 0); mixer6.gain(2, 0);    mixer7.gain(2, 0); mixer9.gain(2, 0); mixer10.gain(2, 0); mixer11.gain(2, 0);  mixer12.gain(2, 0); mixer14.gain(2, 0); mixer15.gain(2, 0); mixer16.gain(2, 0);  mixer17.gain(2, 0);    }
  else if(fray >= 0.6)
  {
    tempfray = (fray * 2.5) - 1.5;
    noiseoffburn = 2;
    fraymixer.gain(0, 1 - tempfray);
    fraymixer.gain(1, tempfray);
    frayrandint = (rand() % 20) + 6;
    sine1.frequency(frayrandint);
    mixer1.gain(2, 0);  mixer4.gain(2, 0);  mixer5.gain(2, 0); mixer6.gain(2, 0);      mixer7.gain(2, 0);  mixer9.gain(2, 0);  mixer10.gain(2, 0); mixer11.gain(2, 0);       mixer12.gain(2, 0);  mixer14.gain(2, 0);  mixer15.gain(2, 0); mixer16.gain(2, 0);    mixer17.gain(2, 0);                           // noise off
  }
  else if(fray <= 0.4)
  {
    tempfray = (0.4 - fray) * 2.5;
    mixer1.gain(2, tempfray);  mixer4.gain(2, tempfray);  mixer5.gain(2, tempfray); mixer6.gain(2, tempfray);      mixer7.gain(2, tempfray);  mixer9.gain(2, tempfray);  mixer10.gain(2, tempfray); mixer11.gain(2, tempfray);       mixer12.gain(2, tempfray);  mixer14.gain(2, tempfray);  mixer15.gain(2, tempfray); mixer16.gain(2, tempfray);    mixer17.gain(2, tempfray);
    noiseoffburn = 0;
    fraymixer.gain(0, 1); fraymixer.gain(1, 0);
  }
  // noiseoffburn
  if(abs(lastfray - fray) > 0.007)
  {
    display.clearDisplay();
    display.setCursor(24, 10); 
    if(!noiseoffburn)  { display.println("noise = ");display.setCursor(24, 30); percent = tempfray*100; display.println(percent);  display.setCursor(62, 30); display.println("%");}  
    else if(noiseoffburn == 2) { display.println("burn = ");display.setCursor(24, 30); percent = tempfray*100; display.println(percent);  display.setCursor(62, 30); display.println("%");} 
    else {display.setCursor(16, 25); display.println("lofi off");}
    display.display();  
    lastfray = fray; 
    offtimer = millis();
  }

}


void dotoggle()
{
  lastkeyrange = keyrange;

  if(digitalRead(14) == LOW) keyrange = 1;
  if(digitalRead(41) == LOW) keyrange = 3;
  if(digitalRead(14) == HIGH && digitalRead(41) == HIGH) keyrange = 2;

  if(lastkeyrange != keyrange)
  {
    if(keyrange == 3)
    {
        waveform1.frequency(32.7);
        waveform2.frequency(34.7);
        waveform3.frequency(36.7); 
        waveform4.frequency(38.9); 
        waveform5.frequency(41.2); 
        waveform6.frequency(43.7);  
        waveform7.frequency(46.3); 
        waveform8.frequency(49); 
        waveform9.frequency(51.9); 
        waveform10.frequency(55); 
        waveform11.frequency(58.3); 
        waveform12.frequency(61.7); 
        waveform13.frequency(65.4); 
    }

    if(keyrange == 2)
    {
        waveform1.frequency(MID1); 
        waveform2.frequency(MID2); 
        waveform3.frequency(MID3); 
        waveform4.frequency(MID4); 
        waveform5.frequency(MID5); 
        waveform6.frequency(MID6);  
        waveform7.frequency(MID7); 
        waveform8.frequency(MID8); 
        waveform9.frequency(MID9); 
        waveform10.frequency(MID10); 
        waveform11.frequency(MID11); 
        waveform12.frequency(MID12); 
        waveform13.frequency(MID13); 
    }
    if(keyrange == 1)
    {
        waveform1.frequency(HIGH1); 
        waveform2.frequency(HIGH2); 
        waveform3.frequency(HIGH3); 
        waveform4.frequency(HIGH4); 
        waveform5.frequency(HIGH5); 
        waveform6.frequency(HIGH6);  
        waveform7.frequency(HIGH7); 
        waveform8.frequency(HIGH8); 
        waveform9.frequency(HIGH9); 
        waveform10.frequency(HIGH10); 
        waveform11.frequency(HIGH11); 
        waveform12.frequency(HIGH12); 
        waveform13.frequency(HIGH13);  
    }
    
  }
}


void lowpitchchange()
{
   if(keyrange == 3)
    {
        waveform1.frequency(32.7);
        waveform2.frequency(34.7);
        waveform3.frequency(36.7); 
        waveform4.frequency(38.9); 
        waveform5.frequency(41.2); 
        waveform6.frequency(43.7);  
        waveform7.frequency(46.3); 
        waveform8.frequency(49); 
        waveform9.frequency(51.9); 
        waveform10.frequency(55); 
        waveform11.frequency(58.3); 
        waveform12.frequency(61.7); 
        waveform13.frequency(65.4); 
    }

    if(keyrange == 2)
    {
        waveform1.frequency(MID1); 
        waveform2.frequency(MID2); 
        waveform3.frequency(MID3); 
        waveform4.frequency(MID4); 
        waveform5.frequency(MID5); 
        waveform6.frequency(MID6);  
        waveform7.frequency(MID7); 
        waveform8.frequency(MID8); 
        waveform9.frequency(MID9); 
        waveform10.frequency(MID10); 
        waveform11.frequency(MID11); 
        waveform12.frequency(MID12); 
        waveform13.frequency(MID13); 
    }
    if(keyrange == 1)
    {
        waveform1.frequency(HIGH1); 
        waveform2.frequency(HIGH2); 
        waveform3.frequency(HIGH3); 
        waveform4.frequency(HIGH4); 
        waveform5.frequency(HIGH5); 
        waveform6.frequency(HIGH6);  
        waveform7.frequency(HIGH7); 
        waveform8.frequency(HIGH8); 
        waveform9.frequency(HIGH9); 
        waveform10.frequency(HIGH10); 
        waveform11.frequency(HIGH11); 
        waveform12.frequency(HIGH12); 
        waveform13.frequency(HIGH13);  
    }
}



void dohightoggle()
{
  lastkeyrange = keyrange;

  if(digitalRead(14) == LOW) keyrange = 1;
  if(digitalRead(41) == LOW) keyrange = 3;
  if(digitalRead(14) == HIGH && digitalRead(41) == HIGH) keyrange = 2;

  if(lastkeyrange != keyrange)
  {
    if(keyrange == 1)   // new high notes
    {
        waveform1.frequency(262);
        waveform2.frequency(277);
        waveform3.frequency(294); 
        waveform4.frequency(311); 
        waveform5.frequency(330); 
        waveform6.frequency(349);  
        waveform7.frequency(370); 
        waveform8.frequency(392); 
        waveform9.frequency(415); 
        waveform10.frequency(440); 
        waveform11.frequency(466); 
        waveform12.frequency(494); 
        waveform13.frequency(523); 
    }

    if(keyrange == 3)
    {
        waveform1.frequency(MID1); 
        waveform2.frequency(MID2); 
        waveform3.frequency(MID3); 
        waveform4.frequency(MID4); 
        waveform5.frequency(MID5); 
        waveform6.frequency(MID6);  
        waveform7.frequency(MID7); 
        waveform8.frequency(MID8); 
        waveform9.frequency(MID9); 
        waveform10.frequency(MID10); 
        waveform11.frequency(MID11); 
        waveform12.frequency(MID12); 
        waveform13.frequency(MID13); 
    }
    if(keyrange == 2)
    {
        waveform1.frequency(HIGH1); 
        waveform2.frequency(HIGH2); 
        waveform3.frequency(HIGH3); 
        waveform4.frequency(HIGH4); 
        waveform5.frequency(HIGH5); 
        waveform6.frequency(HIGH6);  
        waveform7.frequency(HIGH7); 
        waveform8.frequency(HIGH8); 
        waveform9.frequency(HIGH9); 
        waveform10.frequency(HIGH10); 
        waveform11.frequency(HIGH11); 
        waveform12.frequency(HIGH12); 
        waveform13.frequency(HIGH13);  
    }
    
  }
}


void highpitchchange()
{
  if(keyrange == 1)   // new high notes
    {
        waveform1.frequency(262);
        waveform2.frequency(277);
        waveform3.frequency(294); 
        waveform4.frequency(311); 
        waveform5.frequency(330); 
        waveform6.frequency(349);  
        waveform7.frequency(370); 
        waveform8.frequency(392); 
        waveform9.frequency(415); 
        waveform10.frequency(440); 
        waveform11.frequency(466); 
        waveform12.frequency(494); 
        waveform13.frequency(523); 
    }

    if(keyrange == 3)
    {
        waveform1.frequency(MID1); 
        waveform2.frequency(MID2); 
        waveform3.frequency(MID3); 
        waveform4.frequency(MID4); 
        waveform5.frequency(MID5); 
        waveform6.frequency(MID6);  
        waveform7.frequency(MID7); 
        waveform8.frequency(MID8); 
        waveform9.frequency(MID9); 
        waveform10.frequency(MID10); 
        waveform11.frequency(MID11); 
        waveform12.frequency(MID12); 
        waveform13.frequency(MID13); 
    }
    if(keyrange == 2)
    {
        waveform1.frequency(HIGH1); 
        waveform2.frequency(HIGH2); 
        waveform3.frequency(HIGH3); 
        waveform4.frequency(HIGH4); 
        waveform5.frequency(HIGH5); 
        waveform6.frequency(HIGH6);  
        waveform7.frequency(HIGH7); 
        waveform8.frequency(HIGH8); 
        waveform9.frequency(HIGH9); 
        waveform10.frequency(HIGH10); 
        waveform11.frequency(HIGH11); 
        waveform12.frequency(HIGH12); 
        waveform13.frequency(HIGH13);  
    }
}
