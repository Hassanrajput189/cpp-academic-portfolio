#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
struct fraction
{
    int numerator;
    int denomenator;
};
int main()
{
    fraction a, b;
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
    cout << "You entered " << endl<< b.numerator << '/' << b.denomenator;
    cout << "Enter space to print the sum " << endl;
    ch = getch();
    if (ch == ' ')
    {
        cout << "The sum is " << a.numerator * b.denomenator + a.denomenator * b.numerator;
        cout << '/' << a.denomenator * b.denomenator;
    }
    else
    {
        cout << "Wrong input";
    }

    return 0;
}