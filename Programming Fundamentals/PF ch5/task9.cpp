#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
struct t
{
    int hours;
    int minutes;
    int seconds;
};
void swap(t tx, t ty)
{
    int temp1 = tx.hours;
    tx.hours = ty.hours;
    ty.hours = temp1;
    int temp2 = tx.minutes;
    tx.minutes = ty.minutes;
    ty.minutes = temp2;
    int temp3 = tx.seconds;
    tx.seconds = ty.seconds;
    ty.seconds = temp3;
    cout<<tx.hours<<":"<<tx.minutes<<":"<<tx.seconds<<endl;
    cout<<ty.hours<<":"<<ty.minutes<<":"<<ty.seconds<<endl;
}
    int main()
{
    t t1, t2;
    cout << "Enter the value for t1" << endl;
    cout << "Enter hours:";
    cin >> t1.hours;
    cout << "Enter minutes:";
    cin >> t1.minutes;
    cout << "Enter seconds:";
    cin >> t1.seconds;
    cout << "Enter value for t2" << endl;
    cout << "Enter hours:";
    cin >> t2.hours;
    cout << "Enter minutes:";
    cin >> t2.minutes;
    cout << "Enter seconds:";
    cin >> t2.seconds;
    swap(t1,t2);
    return 0;
}