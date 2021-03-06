
/*
  Utility functions to help debugging running code.
*/

#ifndef DEBUG_H
#define DEBUG_H


#define DEBUG_PRINT(str)        \
  Serial.print(millis());     \
  Serial.print(": ");         \
  Serial.print(__PRETTY_FUNCTION__); \
  Serial.print(' ');          \
  Serial.print(__FILE__);     \
  Serial.print(':');          \
  Serial.print(__LINE__);     \
  Serial.print(' ');          \
  Serial.println(str);

#endif
