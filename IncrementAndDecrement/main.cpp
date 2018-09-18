//Using increments and decrements
#include <iostream>

using namespace std;
int main()
{
    //Increments or decrements by 1
    
    //Prefix ++num
    //Postfix num++
    
    int counter {10};
    int result {0};
    //Example 1 - simple increment
    cout << "Counter: " << counter << endl;
    //10
    counter = counter + 1;
    cout << "Counter: " << counter << endl;
    //11
    counter++;
    cout << "Counter: " << counter << endl;
    //12
    ++counter;
    cout << "Counter: " << counter << endl;
    //13
    
    //Example 2 - pre increment
    counter = 10;
    cout << "Example 2: " << counter << endl;
    
    result = ++counter; //Notice the pre increment
    // this means counter = counter + 1
    
    cout << "++counter : " << counter <<  endl;
    cout << "result : " << result <<  endl;
    // We get 11 and 11

    //Example 3 - post increment
    counter = 10;
    result = 0;
    cout << "counter : " << counter << endl;

    result = counter++; //Notice the post increment
    //result = counter; add the 1 after
    //counter = counter + 1;
    cout << "counter++ : " << counter << endl;
    cout << "Result : " << result << endl;
    
    
    //Example 4 
    counter = 10;
    result = 0;
    
    cout << "Counter : " << counter << endl;    //prints 10
    //Display 10
    result = ++counter + 10;    //Note the pre increment
    //result = counter + 10. WE increment before this statement is executed
    //11 + 10 = 21
    cout << "++counter + 10 : " << counter << endl;
    //This displays 11
    cout << "result : " << result << endl;
    
    
    //Example 5
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    // expected 10
    result = counter++ + 10;    //Note the post increment
    // result = 20
    //counter = 11
    //Explained: counter + 10 = 20 when assigned to result but still needs postincrement
    //But the post increment happens after so this means it happens to counter after
    //Counter = 10 + 1 = 11
    cout << "counter++ + 10 : " << counter << endl;
    //This displays 11
    cout << "result : " << result << endl;
    
    // Never use increments or decrements for same var
    //in the same statement
    return 0;
}