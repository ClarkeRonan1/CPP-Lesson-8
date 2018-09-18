//Section 8
//Convert EUR to USD

#include <iostream>

using namespace std;
int main()
{
    //define constants
    const double usdPerEuro {1.19};
    
    
    cout << "Welcome to EUR to USD converter" << endl;
    cout << "Enter the value in Euros: ";
    double euros {0.0};
    double dollars {0.0};
    
    cin >> euros;
    
    //Need to convert euros to dollars
    dollars = euros * usdPerEuro;
    
    cout << euros << " Euros is equal to " << dollars << " dollars" << endl;
    cout <<  endl;
    return 0;
}