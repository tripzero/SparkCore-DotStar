#ifndef DOTSTAR_LIGHTPROTOCOL_H_
#define DOTSTAR_LIGHTPROTOCOL_H_

#include "dotstar_lp.h"

class DotStar : public Adafruit_DotStar
{
public:
    DotStar(uint16_t numLeds, uint8_t order = DOTSTAR_BGR)
    :Adafruit_DotStar(numLeds, order)
    {

    }

    uint16_t numLights()
    {
        return numPixels();
    }
};

#endif