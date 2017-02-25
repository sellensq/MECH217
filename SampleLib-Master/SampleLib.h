#ifndef _SampleLib_h  // avoid including multiple times
#define _SampleLib_h

#include "Arduino.h"

class SampleLib {   // define a class for C++ so you can declare it in your program
 public:
  SampleLib();
  bool begin(void);
  unsigned readTime(void);
  void heartBeat(void);  // call now and then
  
 private:
  uint8_t oversampling;
};

#endif /* _Time_h */

