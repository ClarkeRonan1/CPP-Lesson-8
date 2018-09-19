#include <iostream>

using namespace std;
int main()
{
    //Using == and != operators
    //True is 1, False is 0
    
    //std::boolalpha;
    
    bool equalResult {false};
    bool notEqualResult {false};
    
    int num1 {}, num2 {};
    
    cout << boolalpha; 
    //This will display true/false instead
    //of 1/0
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equalResult = (num1 == num2);
    notEqualResult = (num1 != num2);
    cout << "Comparison result (equals) : " << equalResult << endl;
    cout << "Comparison result (not equals) : " <<notEqualResult << endl; 
    
    char char1 {}, char2 {};
    cout << "Enter two characters separated by a space: ";
    cin >> char1 >> char2;
    equalResult = (char1 == char2);
    notEqualResult = (char1 != char2);
    cout << "Comparison result (equals) : " << equalResult << endl;
    cout << "Comparison result (not equals) : " << notEqualResult << endl;
    
    double double1 {}, double2 {};
    cout << "Enter two doubles separated by a space: ";
    cin >> double1 >> double2;
    equalResult = (double1 == double2);
    notEqualResult = (double1 != double2);
    cout << "Comparison result (equals) : " << equalResult << endl;
    cout << "Comparison result (not equals) : " << notEqualResult << endl;
    
    //Be careful that doubles as the demicals
    //are rounded so 12.0 == to 11.999999999999
    //Which is just not true but computer thinks
    //it is
    
    
    num1 = 0;
    double1 = 0; 
    cout << "Enter an integer and a double separated by a space: ";
    cin >> num1 >> double1;
    equalResult = (num1 == double1);
    notEqualResult = (num1 != double1);
    cout << "Comparison result (equals) : " << equalResult << endl;
    cout << "Comparison result (not equals) : " << notEqualResult << endl;
    
    //If you enter 10 and 10.0
    //Integer 10 is promoted to 10.0 and result
    // is true!
    
    
     
    return 0;
}