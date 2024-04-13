#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c, x1, x2, discriminant, realpart, imaginarypart;
    cout << "Enter the values of a,b,c : ";
    cin >> a >> b >> c;

    discriminant = b*b - 4*a*c;

    if(discriminant > 0)
        {
            x1 = (-b + sqrt(discriminant)) / (2*a);
            x2 = (-b - sqrt(discriminant)) / (2*a);

            cout << "The roots of the equation are real and different" << endl;
            cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;

        }
    else if (discriminant == 0)
    {
        cout << "The roots are real and same" << endl;
        x1 = -b / (2*a);
        cout << "X1 = X2 = " << x1 ;
    }
    else
    {
        realpart = -b / (2*a);
        imaginarypart = sqrt(-discriminant) / (2*a);

        cout << "X1 = " << realpart << "+" << imaginarypart << "i" << endl;
        cout << "X2 = " << realpart << "-" << imaginarypart << "i" << endl;
    }
    return 0;
    

}