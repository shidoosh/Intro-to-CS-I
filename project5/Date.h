

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
