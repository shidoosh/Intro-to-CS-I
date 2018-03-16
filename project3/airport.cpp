
#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

using namespace std;

bool getAirline(string commands, int& pos);
bool plusOrMinus(string commands, int& pos);
bool flightNumber(string commands, int& pos);
bool getMinutes(string commands, int&pos);
bool isWellFormedAirportString(string commands);
double ontimeArrivalPercentage(string commands, string airlinecode);

//airline portion
bool getAirline(string commands, int& pos)
{
    if(pos > commands.size())
        return false;
    if(isalpha(commands[pos]))
    {
        char letter = commands[pos];
        switch(letter)
        {
            case 'A':
            case 'a':
                pos++;
                if(commands[pos]=='A' || commands[pos]=='a' || commands[pos]=='L' || commands[pos]=='l')
                {
                    pos++;
                }
                return true;
                break;
            case 'D':
            case 'd':
                pos++;
                if(commands[pos]=='L' || commands[pos]=='l')
                {
                    pos++;
                }
                return true;
                break;
            case 'U':
            case 'u':
            case 'V':
            case 'v':
                pos++;
                if(commands[pos]=='A' || commands[pos]=='a')
                {
                    pos++;
                }
                return true;
                break;
            case 'S':
            case 's':
                pos++;
                if(commands[pos]=='W' || commands[pos]=='w')
                {
                    pos++;
                }
                return true;
                break;
                
            default:
                break;
        }
   }
    return false;
}


////flight number
bool flightNumber(string commands, int& pos)
{
    int result = 0;
    string temp = "";
    if(!isdigit(commands[pos]))
        return false;
        while(isdigit(commands[pos]))
            {
                temp+=commands[pos];
                pos++;
            }
            for (int i = 0; i< temp.size(); i++)
            {
                result = result * 10 + temp[i]-'0';
                
            }
            
            return true;
}





//plus or minus
bool plusOrMinus(string commands, int& pos)
{

    if (pos > commands.size() )
        return false;
    else if (commands[ pos ] == '+' || commands[ pos ] == '-' )
    {
        pos++;
        return true;
    }
    else
        return false;
}




//minutes
bool getMinutes(string commands, int& pos)
{
    {
        int result = 0;
        string temp = "";
        if(!isdigit(commands[pos]))
            return false;
        while(isdigit(commands[pos]))
        {
            temp+=commands[pos];
            pos++;
        }
        for (int i = 0; i< temp.size(); i++)
        {
            result = result * 10 + temp[i]-'0';
    
        }
        pos++;
        return true;
    }
}





bool isWellFormedAirportString(string commands)
{
    int pos = 0;
    while(pos < commands.size())
    {
        if (!getAirline(commands, pos))
            return false;

        if (!flightNumber(commands, pos))
            return false;

        if(!plusOrMinus(commands, pos))
            return false;

        if(!getMinutes(commands, pos))
            return false;

    }

    return true;
}



double ontimeArrivalPercentage( string commands, string airlineCode)
{
    cout << commands << endl;
    cout << airlineCode << endl;
    int flightsOnTime = 0;
    int totalFlights = 0;
    
    int i = 0;
if (!isWellFormedAirportString(commands))
    return(-1);
    while (i<commands.size())
    {
        if(tolower(commands[i]) != (tolower(airlineCode[0]))
           && (tolower(commands[i+1])) != ((tolower(airlineCode[1])))) //if the airline code is found is not in commands string, continue looking
        {
            i++;
            
        }
        
        if(tolower(commands[i]) == (tolower(airlineCode[0]))            //if airline code is found in string, count each time
           && (tolower(commands[i+1])) == ((tolower(airlineCode[1]))))
        {
            totalFlights++;
            
                i++;
                                            
        while (commands[i] != '-' && (commands [i] != '+' )) // increment i until you find '+' or '-'
        {
            i++;
        }
                                             
                  if(commands[i]=='-') //if it is desired airline code followed by -, it is on time. count.
                  {
                      flightsOnTime++;
                      i++;
                  }
                  if(commands[i]=='+')     //if it is desired airlone code followed by + and than 0, it is on time. count.
                  {
                      i++;
                      if (commands[i]=='0')
                      {
                          flightsOnTime++;
                        
                      }
  
                     {
                        if((commands[i]=='1' || commands[i]=='2' ||commands[i]=='2' ||commands[i]=='3' ||commands[i]=='4' ||commands[i]=='5' ||commands[i]=='6' ||commands[i]=='7' ||commands[i]=='8' ||commands[i]=='9'))
                        {
                            if((commands[i] !='1') && (commands[i+1]!='6'|| commands[i+1]!='7' || commands[i+1]!='8' || commands[i+1]!='9'))
                            {
                                flightsOnTime++;    //if minutes <15, on time.
                            }
                        }
                         
                         
                     }
            
                 }
        
            double result;
              result = flightsOnTime / totalFlights;
            
        }

        i++;
    
    }

    return result;
}
    

int main() {

}
