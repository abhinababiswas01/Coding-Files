#include<iostream>
using namespace std;


int main()
{
    int divisor, dividand, quotient, remainder;

    cout << "Enter Divisor: ";
    cin >> divisor;

    cout << "Enter Dividand: ";
    cin >> dividand;

    quotient = divisor/dividand;

    remainder = divisor%dividand;

    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder ;

    return 0;

    
}