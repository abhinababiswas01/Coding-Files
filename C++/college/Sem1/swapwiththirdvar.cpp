#include<iostream>
using namespace std;


int main()
{
    int n1=0, n2=0, swap;

    cout << "Enter the two numbers: " << endl;
    cin >> n1;
    cin >> n2;

    cout << "Before Swapping: " << endl << "N1= " << n1 << endl << "N2= " <<  n2 << endl;

    swap = n1;
    n1 = n2;
    n2 = swap;

    cout << "After Swapping: " << endl << "N1= " << n1 << endl << "N2= " << n2 << endl;
}