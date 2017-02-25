/* Here's and easy way to build your own library right in the IDE
 *  - create a new sketch called something-Master
 *  - add tabs for something.h and something.cpp and put the library code in them
 *  - write enough code in something-Master to test out the functionality of something
 *  - add an examples folder if there are other samples you want to make available
 *  - create a keywords.txt file to provide the coloring map to the IDE (use text editor and actual tabs)
 *  - copy and rename to put something in the libraries folder of your Arduino folder
 *  
 *  This one also shows how you can repeat things at timed intervals, either using the 
 *  TimeAlarms library, or directly. The TimeAlarms library provides a bunch of additional 
 *  functionality, but can't do things more than once a second.
 */
#include "SampleLib.h"
#include "Time.h"
#include "TimeAlarms.h"

SampleLib obj;

void setup() {
  Serial.begin(115200);
  Serial.print("\n\nSampleLib Test Program\n\n");
  obj.begin();
  Alarm.timerRepeat(1,doIt);
}

void loop() {
  static unsigned long lastDone = 0;
  unsigned long t = millis(); if(t-lastDone >= 1000){ lastDone = t; Serial.print("[direct]"); doIt(); }
  Alarm.delay(0);
}

void doIt(){
  Serial.print(" [thub-dub] ");  
  Serial.println(obj.readTime());
  obj.heartBeat();
}

