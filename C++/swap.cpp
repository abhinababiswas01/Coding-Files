#include<iostream>
using namespace std;


int main()
{
    int n1=0, n2=0;

    cout << "Enter the two numbers: ";
    cin >> n1;
    cin >> n2;

    cout << "Before Swapping: " << endl << "N1= " << n1 << endl << "N2= " <<  n2 << endl;

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    cout << "After Swapping: " << endl << "N1= " << n1 << endl << "N2= " << n2 << endl;

}