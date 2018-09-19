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
    
    return 0;
}