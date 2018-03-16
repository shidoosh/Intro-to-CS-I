
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
