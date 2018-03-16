//
//  ZodiacReader.cpp
//  Project 5
//
//  Created by Stefanie Shidoosh on 2/22/17.
//  Copyright © 2017 Stefanie Shidoosh. All rights reserved.
//

#include "Date.h"
#include "ZodiacReader.h"

using namespace std;


ZodiacReader::ZodiacReader(Date date):mDate(date)
{

}


ZodiacReader::Sign ZodiacReader::checkSign()
{
    {
    if((mDate.getMonth()==3) && (mDate.getDay() >= 21 && mDate.getDay() <=31))      //March 21 - end of March ==>  /////////
        return((ARIES));                                                                                          //ARIES//
    if((mDate.getMonth()==4) && (mDate.getDay() <= 19))                             //April 19;                  /////////
        return((ARIES));
    
    if((mDate.getMonth()==4) && (mDate.getDay() >= 20 && mDate.getDay() <=30))      //April 20 - end of April ==>   //////////
        return((TAURUS));                                                                                          //TAURUS//
    if((mDate.getMonth()==5) && (mDate.getDay() <= 20))                             //May 20;                     //////////
        return((TAURUS));
    
    if((mDate.getMonth()==5) && (mDate.getDay() >= 21 && mDate.getDay() <=31))      //May 21 - end of May ==>   //////////
        return((GEMINI));                                                                                      //GEMINI//
    if((mDate.getMonth()==6) && (mDate.getDay() <= 20))                             //June 20;                //////////
        return((GEMINI));
    
    if((mDate.getMonth()==6) && (mDate.getDay() >= 21 && mDate.getDay() <=30))      //June 21 - end of June     //////////
        return((CANCER));                                                                                      //CANCER//
    if((mDate.getMonth()==7) && (mDate.getDay() <= 22))                             //July 22;                //////////
        return((CANCER));
    
    if((mDate.getMonth()==7) && (mDate.getDay() >= 23 && mDate.getDay() <=31))      //July 23 - end of July ==>   ///////
        return((LEO));                                                                                           //LEO//
    if((mDate.getMonth()==8) && (mDate.getDay() <= 22))                             //August 22;                ///////
        return((LEO));
    
    if((mDate.getMonth()==8) && (mDate.getDay() >= 23 && mDate.getDay() <=31))      //August 23 - end of August ==>     /////////
        return((VIRGO));                                                                                               //VIRGO//
    if((mDate.getMonth()==9) && (mDate.getDay() <= 22))                             //September 22;                   /////////
        return((VIRGO));
    
    if((mDate.getMonth()==9) && (mDate.getDay() >= 23 && mDate.getDay() <=30))      //September 23 - end of September ==>     /////////
        return((LIBRA));                                                                                                     //LIBRA//
    if((mDate.getMonth()==10) && (mDate.getDay() <= 22))                             //October 22;                          /////////
        return((LIBRA));
    
    if((mDate.getMonth()==10) && (mDate.getDay() >= 23 && mDate.getDay() <=31))      //October 23 - end of October ==>    ///////////
        return((SCORPIO));                                                                                               //SCORPIO//
    if((mDate.getMonth()==11) && (mDate.getDay() <= 21))                             //November 21;                     ///////////
        return((SCORPIO));

    if((mDate.getMonth()==11) && (mDate.getDay() >= 22 && mDate.getDay() <=30))      //November 22 - end of November ==>  ///////////////
        return((SAGITTARIUS));                                                                                           //SAGITTARIUS//
    if((mDate.getMonth()==12) && (mDate.getDay() <= 21))                             //December 21;                     ///////////////
        return((SAGITTARIUS));
    
    if((mDate.getMonth()==12) && (mDate.getDay() >= 22 && mDate.getDay() <=31))      //December 22 - end of December ==>  /////////////
        return((CAPRICORN));                                                                                             //CAPRICORN//
    if((mDate.getMonth()==1) && (mDate.getDay() <= 19))                             //January 19;                       /////////////
        return((CAPRICORN));

    if((mDate.getMonth()==1) && (mDate.getDay() >= 20 && mDate.getDay() <=31))      //January 20 - end of January ==>      ////////////
        return((AQUARIUS));                                                                                               //AQUARIUS//
    if((mDate.getMonth()==2) && (mDate.getDay() <= 18))                             //February 18;                       ////////////
        return((AQUARIUS));
    
    if((mDate.getMonth()==2) && (mDate.getDay() >= 19 && mDate.getDay() <=28))      //February 19 - end of February ==>  //////////
        return((PISCES));                                                                                               //PISCES//
    if((mDate.getMonth()==3) && (mDate.getDay() <= 20))                             //March 20;                        //////////
        return((PISCES));
    }
    
    return (ARIES);
}

bool ZodiacReader::onCusp()
{
    {
    if((mDate.getMonth()==4) && ((mDate.getDay()==18) || (mDate.getDay()==19) ||(mDate.getDay()==20) || (mDate.getDay()==21)))
        return true;
    
    if((mDate.getMonth()==5) && ((mDate.getDay()==19) ||(mDate.getDay()==20) ||(mDate.getDay()==21) || (mDate.getDay()==22)))
        return true;

    if((mDate.getMonth()==6) && ((mDate.getDay()==19) ||(mDate.getDay()==20) ||(mDate.getDay()==21) || (mDate.getDay()==22)))
        return true;

    if((mDate.getMonth()==7) && ((mDate.getDay()==21) ||(mDate.getDay()==22) ||(mDate.getDay()==23) || (mDate.getDay()==24)))
        return true;
    
    if((mDate.getMonth()==8) && ((mDate.getDay()==21) ||(mDate.getDay()==22) ||(mDate.getDay()==23)||(mDate.getDay()==24)))
        return true;

    if((mDate.getMonth()==9) && ((mDate.getDay()==21) ||(mDate.getDay()==22) ||(mDate.getDay()==23)|| (mDate.getDay()==24)))
        return true;

    if((mDate.getMonth()==10) && ((mDate.getDay()==21) ||(mDate.getDay()==22) ||(mDate.getDay()==23)|| (mDate.getDay()==24)))
        return true;
    
    if((mDate.getMonth()==11) && ((mDate.getDay()==20) ||(mDate.getDay()==21) ||(mDate.getDay()==22) || (mDate.getDay()==23)))
        return true;
    
    if((mDate.getMonth()==12) && ((mDate.getDay()==20) ||(mDate.getDay()==21) ||(mDate.getDay()==22)||(mDate.getDay()==23)))
        return true;

    if((mDate.getMonth()==1) && ((mDate.getDay()==18) ||(mDate.getDay()==19) ||(mDate.getDay()==20) || (mDate.getDay()==21)))
        return true;

    if((mDate.getMonth()==2) && ((mDate.getDay()==17) ||(mDate.getDay()==18) ||(mDate.getDay()==19) || (mDate.getDay()==20)))
        return true;

    if((mDate.getMonth()==3) && ((mDate.getDay()==19) ||(mDate.getDay()==20) ||(mDate.getDay()==21) || (mDate.getDay()==22)))
        return true;
    }
    
    return false;
}

ZodiacReader::Sign ZodiacReader::cuspSign()
{
    if(onCusp()==true)
    {
        if(checkSign() == ARIES && (mDate.getMonth()==3))
            return (PISCES);
        if(checkSign() == ARIES && (mDate.getMonth()==4))
            return (TAURUS);
        
        if(checkSign() == TAURUS && (mDate.getMonth()==4))
            return (ARIES);
        if(checkSign() == TAURUS && (mDate.getMonth()==5))
            return (GEMINI);

        if(checkSign() == GEMINI && (mDate.getMonth()==5))
            return (TAURUS);
        if(checkSign() == GEMINI && (mDate.getMonth()==6))
            return (CANCER);
        
        if(checkSign() == CANCER && (mDate.getMonth()==6))
            return (GEMINI);
        if(checkSign() == CANCER && (mDate.getMonth()==7))
            return (LEO);
        
        if(checkSign() == LEO && (mDate.getMonth()==7))
            return (CANCER);
        if(checkSign() == LEO && (mDate.getMonth()==8))
            return (VIRGO);

        if(checkSign() == VIRGO && (mDate.getMonth()==8))
            return (LEO);
        if(checkSign() == VIRGO && (mDate.getMonth()==9))
            return (LIBRA);
        
        if(checkSign() == LIBRA && (mDate.getMonth()==9))
            return (VIRGO);
        if(checkSign() == LIBRA && (mDate.getMonth()==10))
            return (SCORPIO);
        
        if(checkSign() == SCORPIO && (mDate.getMonth()==10))
            return (LIBRA);
        if(checkSign() == SCORPIO && (mDate.getMonth()==11))
            return (SAGITTARIUS);
        
        if(checkSign() == SAGITTARIUS && (mDate.getMonth()==11))
            return (SCORPIO);
        if(checkSign() == SAGITTARIUS && (mDate.getMonth()==12))
            return (CAPRICORN);
        
        if(checkSign() == CAPRICORN && (mDate.getMonth()==12))
            return (SAGITTARIUS);
        if(checkSign() == CAPRICORN && (mDate.getMonth()==1))
            return (AQUARIUS);
        
        if(checkSign() == AQUARIUS && (mDate.getMonth()==1))
            return (CAPRICORN);
        if(checkSign() == AQUARIUS && (mDate.getMonth()==2))
            return (PISCES);
        
        if(checkSign() == PISCES && (mDate.getMonth()==2))
            return (AQUARIUS);
        if(checkSign() == PISCES && (mDate.getMonth()==3))
            return (ARIES);

    
    }
    return(ARIES);
}

std::string ZodiacReader::stringifySign(ZodiacReader::Sign sign)
{   
    {
    if(sign==ARIES)
        return(("Aries"));

    if(sign==TAURUS)
        return(("Taurus"));

    if(sign==GEMINI)
        return(("Gemini"));

    if(sign==CANCER)
        return(("Cancer"));

    if(sign==LEO)
        return(("Leo"));

    if(sign==VIRGO)
        return(("Virgo"));

    if(sign==LIBRA)
        return(("Libra"));
        
    if(sign==SCORPIO)
        return(("Scorpio"));

    if(sign==SAGITTARIUS)
        return(("Sagittarius"));
    
    if(sign==CAPRICORN)
       return(("Capricorn"));
        
    if(sign==AQUARIUS)
        return(("Aquarius"));
  
    if(sign==PISCES)
        return(("Pisces"));

    }

    return("");

}




        
    
    






