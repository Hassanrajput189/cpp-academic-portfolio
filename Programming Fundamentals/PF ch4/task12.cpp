#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
struct frac
{
    int numerator;
    int denomenator;
};
    int main()
{
    frac a, b;
    char ch;
    cout << "Enter first fraction" << endl;
    cin >> a.numerator;
    cout << '/' << endl;
    cin >> a.denomenator;
    cout << "You entered " << endl << a.numerator << '/' << a.denomenator;
    cout << "\nEnter second fraction" << endl;
    cin >> b.numerator;
    cout << '/' << endl;
    cin >> b.denomenator;
    cout << "You entered " << endl << b.numerator << '/' << b.denomenator;
    cout << "\nEnter the operator " << endl;
    ch = getche();
    if (ch == '+')
    {
        cout << "The sum is " << a.numerator * b.denomenator + a.denomenator * b.numerator;
        cout << '/' << a.denomenator * b.denomenator;
    }
    else if (ch == '-')
    {
        cout << "The difference is " << a.numerator * b.denomenator - a.denomenator * b.numerator;
        cout << '/' << a.denomenator * b.denomenator;
    }
    else if (ch == '*')
    {
        cout << "The product is " << a.numerator * b.numerator <<'/'<< a.denomenator * b.denomenator;
    }
    else if (ch == '/')
    {
        cout << "The quotient is " << a.numerator * b.denomenator <<'/'<< a.denomenator * b.numerator;
    }
    else 
    {
        cout<<"Enter the correct operator";
    }

    return 0;
}