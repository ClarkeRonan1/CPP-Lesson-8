#include <iostream>

using namespace std;
int main()
{
    //Mixed type expressions
    //Operands must be of the same type
    
    //Coercion is where conversion 
    //automatically made
    
    //Higher types:
    //Hold larger values
    //Lower types:
    //Can hold smaller values
    
    // lower type value will typically
    //fit into higher types value
    
    //Coercion:
        //conversion of one operand to another
        //data type
    //Promotion:
        //Convertion to a higher type
        
    //Demotion:
        // Conversion to a lower type
        
        
        
    int totalAmount {100};
    int totalNumber {8};
    double average {0.0};
    
    average = totalAmount / totalNumber;
    cout << average << endl;    //displays 12
    
    average = static_cast<double>(totalAmount/totalNumber);
    cout << average << endl;    //displays 12
    
    
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count{3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    total = num1 + num2 + num3;
    
    double average1 {0.0};
    average1 = static_cast<double>(total) / count;
    //converts total to double, and in turn converts
    //count into a double too, promotion
    
    //average = (double)total/count;
    //This is old style, it does't check to
    //see if it can be converted to double.
    //Use statci_cast<double> instead
    
    cout << "The 3 numbers were: " << num1 << "," << num2 << ", " << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average1 << endl;

    return 0;
}