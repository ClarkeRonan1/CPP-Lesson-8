#include <iostream>

using namespace std;
int main()
{
    int num1 {10};
    int num2 {20};
    //Using expressions
    
    //addition
    //1.5 + 2.8
    
    //statements
    //Complete line of code that performs 
    //some action
    //Statements are made of expressions
    
    int x; // declaration statement
    x = 12; //assignment statement
    
    //Using Operators
    //most are binary operators
    
    //assignment
    num1 = 100;
    num1 = num2;
    //right side into left ;)
    
    num1 = num2 = 1000;
    //1000 into num2, num2 into num1
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
     
    //arithmetic
    //% only works with integers
    
    int num3 {200};
    int num4 {100};
    
    cout << num3 << " + " << num4 << " = " << num3 + num4 << endl;
    
    int result {0};
    result = num3-num4;
    cout << "- " << result << endl;
    
    result = num3/num4;
    cout << "200/100 " << result << endl;
    
    result = num4/num3; //expect decimal
    cout << "100/200 " << result << endl;
    //Except there is no decimals in integer division
    
    //using %
    result = num3 % num4;
    cout << "200 % 100 " << result << endl;
    //So it goes in two times with remainder 0
    //0 is diplayed
    
    //Remember BEMDAS
    //Brackets, Exponentiation, Multiplication, Division, Addition and the Subtraction
    
    result = num3 * 10 + num4;
    cout << result << endl;
    //200 * 10 = 2000 + 100 = 2100
    //increment/decrement
    //relational (><, etc)
    //logical   (and, or)
    //member access (pointers,etc)
    //other
    
    return 0;
}