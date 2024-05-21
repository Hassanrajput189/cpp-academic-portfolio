#include <iostream>
using namespace std;
class Sum
{
    int num1;
    int num2;

public:
    void setnum1()
    {
        cout << "Enter the value of num1:";
        cin >> num1;
    }
    void setnum2()
    {
        cout << "Enter the value of num2:";
        cin >> num2;
    }
    void getSum()
    {
        if (num1 > num2)
        {
            if (num1 % 2 != 0)
            {
                if (num2 % 2 == 0)
                {
                    if (num1 >= 0 && num2 >= 0)
                    {
                        cout << "The sum is " << num1 + num2;
                    }
                    else
                    {
                        cout << "Invalid input";
                    }
                }
                else
                {
                    cout << "Invalid input";
                }
            }
            else
            {
                cout << "Invalid input";
            }
        }
        else
        {
            cout << "Invalid input";
        }
    }
};
int main()
{
    Sum s;
    s.setnum1();
    s.setnum2();
    s.getSum();
    return 0;
}