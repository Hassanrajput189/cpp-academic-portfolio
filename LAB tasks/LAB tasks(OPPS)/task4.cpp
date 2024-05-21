#include <iostream>
#include <conio.h>
using namespace std;
class Employee
{
protected:
    string name;
    int bonus;
    int salary;
    int total_attendence;
    int absent;
};
class Admin : public Employee
{
public:
    Admin()
    {
        name = "";
        salary = 60000;
        bonus = 0;
        total_attendence = 30;
        absent = 0;
    }
    void setAdmin()
    {
        cout << "Enter Admin name: ";
        cin >> name;
        cout << "Enter days of absence:";
        cin >> absent;
        if (absent > total_attendence)
        {
            cout << "you are fired!" << endl;
        }
    }
    void getAdmin()
    {
        cout << "Name:" << name << endl;
        cout << "days of absence:" << absent << endl;
        if (absent == 0)
        {
            salary += 60000;
            cout << salary << "Congratulation! you got a bonus of 10%" << endl;
        }
        else
        {
            cout << "You will not be getting any bonus because you were absent on " << absent << "days";
        }
    }
};
class Salesman : public Employee
{
public:
    Salesman()
    {
        name = "";
        salary = 40000;
        bonus = 0;
        total_attendence = 30;
        absent = 0;
    }
    void setSalesman()
    {
        cout << "Enter Salesman name: ";
        cin >> name;
        cout << "Enter days of absence:";
        cin >> absent;
        if (absent > total_attendence)
        {
            cout << "you are fired!" << endl;
        }
    }
    void getSalesman()
    {
        cout << "Name:" << name << endl;
        cout << "days of absence:" << absent << endl;
        if (absent == 0)
        {
            salary += 40000;
            cout << "Congratulation! you got a bonus of 10%" << endl;
        }
        else
        {
            cout << "You will not be getting any bonus because you were absent " << absent << " days";
        }
    }
};
int main()
{
    Admin a;
    Salesman s;
    char ch;
    do
    {
        cout << "Enter 1 for Admin or 2 for Salesman:";
        ch = getche();
        cout << endl;
        if (ch == '1')
        {
            a.setAdmin();
            a.getAdmin();
        }
        else if (ch == '2')
        {
            s.setSalesman();
            s.getSalesman();
        }
        else
        {
            cout << "Wrong input" << endl;
        }
        cout << "press enter to check the bonus of more employees or press any key to exit" << endl;
        ch = getch();
        if (ch != '\r')
        {
            break;
            system("CLS");
        }
    } while (ch == '\r');
    return 0;
}