#ifndef DOTSTAR_LIGHTPROTOCOL_H_
#define DOTSTAR_LIGHTPROTOCOL_H_

#include "dotstar.h"

class DotStar : public Adafruit_DotStar
{
public:
    DotStar(uint16_t numLeds)
    :Adafruit_DotStar(numLeds, DOTSTAR_BGR)
    {
        //setBrightness(10);
    }

    uint16_t numLights()
    {
        return numPixels();
    }
};

#endif