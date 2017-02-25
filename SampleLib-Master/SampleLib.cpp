#include "SampleLib.h"

SampleLib::SampleLib() {      // initializer for the class
}

bool SampleLib::begin(void) {
  delay(50);
  return true;
}

void SampleLib::heartBeat(void) {                 // Call when convenient

}

unsigned SampleLib::readTime(void) {               // Short Time in millis
  unsigned long ms = micros() / 1000;
  return (unsigned) ms;
}


