//
//  ZodiacReader.hpp
//  Project 5
//
//  Created by Stefanie Shidoosh on 2/22/17.
//  Copyright © 2017 Stefanie Shidoosh. All rights reserved.
//

#ifndef ZodiacReader_h
#define ZodiacReader_h

#include <stdio.h>
#include "Date.h"
#include <string>


class ZodiacReader
{
public:
    ZodiacReader(Date date);
    enum Sign{ARIES, TAURUS, GEMINI, CANCER, LEO, VIRGO, LIBRA, SCORPIO, SAGITTARIUS, CAPRICORN, AQUARIUS, PISCES};
    ZodiacReader::Sign checkSign();
    bool onCusp();
    ZodiacReader::Sign cuspSign();
    std::string stringifySign(ZodiacReader::Sign sign);
    
private:
    Date mDate;
};




#endif /* ZodiacReader_h */
