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
int main()
{
    t t1;
    char space;
    cout << "Enter hours" << endl;
    cin >> t1.hours;
    cout << "Enter minutes" << endl;
    cin >> t1.minutes;
    cout << "Enter seconds" << endl;
    cin >> t1.seconds;
    cout << "You entered" << endl
         << t1.hours << ':' << t1.minutes << ':' << t1.seconds;
    cout << "\nEnter space to conver into seconds" << endl;
    space = getch();
    if (space == ' ')
    {
        cout << t1.hours << ":" << t1.minutes << ":" << t1.seconds << " is equal to " << t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    }
    else
    {
        cout << "invalid input";
    }

    return 0;
}