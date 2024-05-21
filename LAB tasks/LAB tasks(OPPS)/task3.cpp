#include <iostream>
#include <conio.h>
using namespace std;
class Employee
{
protected:
	string name;
	int emp_id;
	int amount_deduction;
	int gross_pay;
	int net_pay;
};
class Data : public Employee
{
public:
	Data()
	{
		name = "";
		emp_id = 0;
		amount_deduction = 0;
		gross_pay = 0;
		net_pay = 0;
	}
	void setEmployee()
	{
		cout << "Enter employee name: ";
		cin >> name;
		cout << "Enter employee id: ";
		cin >> emp_id;
		cout << "Enter employee gross salary: ";
		cin >> gross_pay;
		cout << "Enter amount deduction of the employee: ";
		cin >> amount_deduction;
		if (amount_deduction > gross_pay)
		{
			system("CLS");
			cout << "amount deductions cannot be greater than gross pay" << endl;
		}
	}
	void getEmployee()
	{
		cout << "The name of the employee is " << name << endl;
		cout << "The employee id is " << emp_id << endl;
		cout << "The gross pay of the employee is " << gross_pay << endl;
		cout << "The amount deduction of the employee is " << amount_deduction << endl;
		net_pay = gross_pay - amount_deduction;
		cout << "The net pay of the employee is:";
		cout << net_pay;
	}
};
int main()
{
	Data e;
	char ch;
	do
	{
		e.setEmployee();
		e.getEmployee();
		cout << "\nPress enter for another employee or press any key to exit";
		ch = getche();
		cout << endl;
		if (ch != '\r')
		{
			system("CLS");
			cout << "exit";
			break;
		}
	} while (ch == '\r');
	return 0;
}
