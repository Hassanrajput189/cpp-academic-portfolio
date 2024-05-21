#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    struct frac
{
    int numerator;
    int denomenator;
};
void fadd(frac a,frac b){
    cout << "\nThe sum is " << a.numerator * b.denomenator + a.denomenator * b.numerator;
    cout << '/' << a.denomenator * b.denomenator;
}
int fdiff(frac a,frac b){
    cout << "\nThe difference is " << a.numerator * b.denomenator - a.denomenator * b.numerator;
    cout << '/' << a.denomenator * b.denomenator;
}
int fpro(frac a,frac b){
     cout << "\nThe product is " << a.numerator * b.numerator <<'/'<< a.denomenator * b.denomenator;
}
int fquo(frac a,frac b){
    cout << "\nThe quotient is " << a.numerator * b.denomenator <<'/'<< a.denomenator * b.numerator;
}
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
        fadd(a,b);    
    }
    else if (ch == '-')
    {
        fdiff(a,b);
    }
    else if (ch == '*')
    {
       fpro(a,b);
    }
    else if (ch == '/')
    {
        fquo(a,b);
    }
    else 
    {
        cout<<"Enter the correct operator";
    }
    return 0;
 }