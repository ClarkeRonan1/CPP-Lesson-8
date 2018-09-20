#include <iostream>
using namespace std;

int main()
{
    //!
    //&&
    // || 
    
    //Precedence, just like BEMDAS
    //1. not is highest
    //2. and is lower
    //3. or is lowest
    
    //Short circuit Evaluation
    //When evaluating a logical expression
    //C++ stops as soon as the result is
    //known
    int num {};
    const int lower {10};
    const int upper {20};
    
    cout << boolalpha;
    
    //Determine if an entered integer is between
    //two other integers
    //assume lower < upper
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
    cin >> num;
    bool withinBounds {false};
    
    bool outsideBounds {false};
    outsideBounds = (num < lower || num > upper);
    //cout << num << " is outside the boundaries?\n" << outsideBounds << endl;
    
    
    withinBounds = (num > lower && num < upper);
    //cout << num << " is within the bounds?\n" << withinBounds << endl;
    
    bool onTheBounds {false};
    onTheBounds = (num == lower || num == upper);
    cout << num << " is on the bounds?\n" << onTheBounds << endl;
    
    bool wearCoat {false};
    double temperature {};
    int windSpeed {};
    
    const int windSpeedForCoat {25};
    //Wind over this value requires a coat
    const double temperatureForCoat {45};
    //Temperature below this value requires a coat
    
    //Require coat if either wind is too high 
    //OR temperature is too low
    cout << "\nEnter the current temperature : ";
    cin >> temperature;
    cout << "\nEnter windspeed in (mph): ";
    cin >> windSpeed;
    
    //Check whether these require a coat
    wearCoat = (temperature < temperatureForCoat || windSpeed > windSpeedForCoat );
    cout << "Today you should wear a coat?\n" << wearCoat << endl;
    
    return 0;
}