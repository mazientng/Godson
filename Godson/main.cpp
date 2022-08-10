#include <iostream>
using namespace std;
 
const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNY = 1;
 
int main() {
 
    int numberOfQuarters, numberOfDimes, numberOfNickels, numberOfPennies;
    int totalNumberCoins, totalAmountDollar, totalAmountCents;
 
    cout << "Please enter number of coins:" << endl;
    cout << "# of quarters: ";
    cin >> numberOfQuarters;
 
    cout << "# of dimes: ";
    cin >> numberOfDimes;
 
    cout << "# of nickels: ";
    cin >> numberOfNickels;
 
    cout << "# of pennies: ";
    cin >> numberOfPennies;
 
    totalNumberCoins = (numberOfQuarters * QUARTER) + (numberOfDimes * DIME) +
            (numberOfNickels * NICKEL) + (numberOfPennies * PENNY);
 
    totalAmountDollar = totalNumberCoins / 100;
    totalAmountCents = totalNumberCoins % 100;
 
    cout << "The monetary value is " << totalAmountDollar << " dollar(s) and " << totalAmountCents <<" cent(s)." << endl;
 
    return 0;
}
