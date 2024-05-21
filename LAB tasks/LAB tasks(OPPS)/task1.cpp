#include <iostream>
using namespace std;
class Votes
{
private:
    int PTI;
    int MQM;

public:
    Votes()
    {
        PTI = 0;
        MQM = 0;
    }
    void setPTI()
    {
        cout << "Enter votes for PTI:";
        cin >> PTI;
    }
    void setMQM()
    {
        cout << "Enter vote for MQM:";
        cin >> MQM;
    }
    void getElections()
    {
        if (MQM > PTI)
        {
            cout << "MQM WON by " << MQM - PTI << " Votes!";
        }
        else
        {
            cout << "PTI WON by " << PTI - MQM << " Votes!";
        }
    }
};
int main()
{
    Votes e;
    e.setPTI();
    e.setMQM();
    e.getElections();
    return 0;
}
