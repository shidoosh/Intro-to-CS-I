

#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main( ) {
    string riderName;
    string rideType;
    double milesDriven( 0 );
    double minutesDriven( 0 );
    
    cout.setf(ios::fixed);              //"Magical Formula"
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "Customer Name: " ;         // Prompt "Customer Name: " to user
    getline(cin, riderName);
    if (riderName=="")
    {
        cout << "--- You must enter a customer name." << endl;
        return 0;
    }
    //If no name is entered (not including spaces or tabs), error message outputs. Program quits.

        
    
    cout << "Miles to be driven: ";     // Prompt "Miles to be driven: " to user
    cin >> milesDriven;
    if (milesDriven <= 0)
    {
        cout << "--- The mileage must be positive." << endl;
        return 0;
    }
    //If the user inputs a negative number or 0, error message outputs. Program quits.
    
    cout<< "Minutes to be driven: ";    // Prompt "Minutes to be driven: " to user
    cin >> minutesDriven;
    if (minutesDriven <= 0)
    {
        cout << "--- The time must be positive."<< endl;
        return 0;
    }
    //If the user inputs a negative number or 0, error message outputs. Program quits.
    
    cout<< "Ride Type: ";       // Prompt "Ride Type: " to user
    cin.ignore( INT_MAX, '\n');
    getline(cin, rideType);
   
    
    if (rideType != "Br-UberX")
    {
        if (rideType != "Br-UberXL")
        {
            cout << "--- The ride type is not valid." << endl;
            return 0;
        }
    }
    //If the user inputs a ride type that is not Br-UberX or Br-UberXL, error message outputs. Program quits.
   
    double BRx = (0.15*minutesDriven) + (0.90*milesDriven) + 1.65; // Defines Br-UberX fare calculation

        if (rideType == "Br-UberX" && BRx > 5.15)
            cout << "--- The fare for " << riderName << " is " << "$" << BRx;
    //If the inputted ride type is Br-UberX, the Br-UberX calculation is utilized and the fare is outputted for when it is more than minimum charge.
    
        if (rideType == "Br-UberX" && BRx <= 5.15)
            cout << "--- The fare for " << riderName << " is $5.15";
    //If the inputted ride type is Br-UberX, the Br-UberX calculation is utilized and the fare is outputted for when it is less than or equal to minimum charge.
    
        cout << endl;
    

    double BRXL = (0.30*minutesDriven) + (1.55*milesDriven) + 1.65; // Defines Br-UberXL fare calculation
   
        if (rideType == "Br-UberXL" && BRXL > 7.65)
            cout << "--- The fare for " << riderName << " is " << "$" <<  BRXL;
   //If the inputted ride type is Br-UberXL, the Br-UberXL calculation is utilized and the fare is outputted for when it is more than minimum charge.
    
        if (rideType == "Br-UberXL" && BRXL <= 7.65)
            cout << "--- The fare for " << riderName << " is $7.65";
    //If the inputted ride type is Br-UberXL, the Br-UberXL calculation is utilized and the fare is outputted for when it is less than or equal to minimum charge.
    
        cout << endl;



    return ( 0 );
}
