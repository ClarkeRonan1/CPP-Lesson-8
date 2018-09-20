#include <iostream>

int main()
{
    using namespace std;
    
    //declare constants
    const int twoEuroValue {200};
    const int oneEuroValue {100};
    const int fiftyCentValue {50};
    const int twentyCentValue {20};
    const int tenCentValue {10};
    const int fiveCentValue {5};
    const int twoCentValue {2};
    const int oneCentValue {1};
    
    int inputAmount {};
    cout << "Enter an amount in cents: ";
    cin >> inputAmount;
    
    int balance{}, twoEuros{}, oneEuro{}, fiftyCents{}, twentyCents{}, tenCents{}, fiveCents{}, twoCents{}, oneCents{};
    
    twoEuros = inputAmount / twoEuroValue;
    balance = inputAmount - (twoEuros * twoEuroValue);
    // divide input by 200
    //balance = input - (0 * 200), balance still 0
    
    cout << "2 Euro coins: " << twoEuros << endl;
    
    oneEuro = balance / oneEuroValue;
    balance -= (oneEuro * oneEuroValue);
    
    cout << "Euro coins: " << oneEuro << endl;
    
    fiftyCents = balance / fiftyCentValue;
    balance -= (fiftyCents * fiftyCentValue);
    
    cout << "50 cents: " << fiftyCents << endl;
    
    twentyCents = balance / twentyCentValue;
    balance -= (twentyCents * twentyCentValue);
    
    cout << "20 cents: " << twentyCents << endl;
    
    tenCents = balance / tenCentValue;
    balance -= (tenCents * tenCentValue);
    
    cout << "10 cents: " << tenCents << endl;
    
    fiveCents = balance / fiveCentValue;
    balance -= (fiveCents * fiveCentValue);
    
    cout << "5 cents: " << fiveCents << endl;

    twoCents = balance / twoCentValue;
    balance -= (twoCents * twoCentValue);
    
    cout << "2 cents: " << twoCents << endl;

    oneCents = balance;
    cout << "1 cents: " << oneCents << endl;

    
    return 0;
}