//
//  Date.cpp
//  Project 5
//
//  Created by Stefanie Shidoosh on 2/22/17.
//  Copyright © 2017 Stefanie Shidoosh. All rights reserved.
//

#include "Date.h"

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

Date::Date(int month, int day)
{
    mMonth = month;
    mDay = day;
}

int Date::getMonth()
{
    return( mMonth );
}

int Date::getDay()
{
    return( mDay );
}
