#ifndef PiscaLED_h
#define PiscaLED_h

#include "Arduino.h"

class PiscaLED {
  public:
    PiscaLED(byte pinLED, int tempoPisca = 1000);
    void play();
    void stop();
    void loop();
  private:
    unsigned long delayPisca;
    bool estadoPisca;
    byte pino;
    int tempo;
};

#endif