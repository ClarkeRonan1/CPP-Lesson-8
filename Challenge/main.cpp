#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    /*
     * This is a program that prompts user to enter an amount
     * This amount is then converted to relevant euros and cents
     * Down to each individual coin
     */
     double inputAmount {0};
     inputAmount = 5.6;
     round(inputAmount);
     
     int twoEuroCounter {0};
     int oneEuroCounter {0};
     int fiftyCentCounter {0};
     int twentyCentCounter {0};
     int tenCentCounter {0};
     int fiveCentCounter {0};
     int twoCentCounter {0};
     int oneCentCounter {0};
     //Prompt user for input
     //cout << "Please enter the amount you want change for: ";
     //cin >> inputAmount;
     
     //Do checking on the amount
     if (inputAmount > 0.00)   //This means the program need to be run
     {
         //Input amount is more than 0
         while (inputAmount >= 2)   //While 2 or more
         {
             inputAmount = inputAmount - 2;
             twoEuroCounter++;
             cout << "2 Euros: " << twoEuroCounter << endl;
             cout << "input Amount: " << inputAmount << endl;
         }
         while (inputAmount >= 1 && inputAmount < 2)    //while 1 or more, but less than 2
         {
             inputAmount = inputAmount - 1;
             oneEuroCounter++;
             cout << "1 Euros: " << oneEuroCounter << endl;
             cout << "input Amount: " << inputAmount << endl;
         }
         while (inputAmount >= 0.5 && inputAmount < 1)  //while 50 cent or more, and less than 1
         {
             inputAmount = inputAmount - 0.5;
             fiftyCentCounter++;
             cout << "50 Cents: " << fiftyCentCounter << endl;
             cout << "input Amount: " << inputAmount << endl;
         }
         while (inputAmount >= 0.2 && inputAmount < 0.5)    //while 20 cent or more, and less than 50 cent
         {
             inputAmount = inputAmount - 0.2;
             twentyCentCounter++;
             cout << "20 Cents: " << twentyCentCounter << endl;
             cout << "input Amount: " << inputAmount << endl;
         }
         while (inputAmount >= 0.1 && inputAmount < 0.2)    //while 10 or more, and less than 20 cent
         {
             inputAmount = inputAmount - 0.1;
             tenCentCounter++;
             cout << "10 Cents: " << tenCentCounter << endl;
             cout << "input Amount: " << inputAmount << endl;
         }
         while (inputAmount >= 0.05 && inputAmount < 0.1)
         {
             inputAmount = inputAmount - 0.05;
             fiveCentCounter++;
             cout << "5 Cents: " << fiveCentCounter << endl;
             cout << "input Amount: " << inputAmount << endl;
         }
         
     }
     cout << "2 Euro: " << twoEuroCounter << endl;
     cout << "1 Euro: " << oneEuroCounter << endl;
     cout << "50 cent: " << fiftyCentCounter << endl;
     cout << "20 cent: " << twentyCentCounter << endl;
     cout << "10 cent: " << tenCentCounter << endl;
     cout << "5 cent: " << fiveCentCounter << endl;
     cout << "2 cent: " << twoCentCounter << endl;
     cout << "1 cent: " << oneCentCounter << endl;
     
    return 0;
}