//
//  Date.hpp
//  Project 5
//
//  Created by Stefanie Shidoosh on 2/22/17.
//  Copyright © 2017 Stefanie Shidoosh. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

#include <stdio.h>

class Date
{
public:
    Date(int month, int day);
    int getMonth();
    int getDay();
    
private:
    int mMonth;
    int mDay;
};





#endif /* Date_hpp */
