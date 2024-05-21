#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

struct company
{
    string Cname;
};
struct car
{
    string s;
    string n;
    int price;
    company C1;
};
void toyota(car ct)
{
    cout << "Welcome to " << ct.C1.Cname;
    cout << "\nCorolla\nYaris\nFortuner\nLandcruser";
    cout << "\nEnter the name of the car you want:";
    cin >> ct.n;
    if (ct.n == "corolla")
    {
        cout << ct.n << endl;
        cout << "The price for " << ct.n << " is 800000" << endl;
        cout << "Do you want to negociate:";
        cin >> ct.s;
        if (ct.s == "yes")
        {
            cout << "Enter amount of negociation:";
            cin >> ct.price;
            while (ct.price < 700000)
            {
                cout << "This amount is not acceptable for this car" << endl;
                cout << "Plese increase amount:";
                cin >> ct.price;
            }
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees " << ct.price;
        }
        else if (ct.s == "no" || ct.price == 800000)
        {
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees 800000";
        }
    }

    else if (ct.n == "yaris")
    {
        cout << ct.n << endl;
        cout << "The price for " << ct.n << " is 500000" << endl;
        cout << "Do you want to negociate:";
        cin >> ct.s;
        if (ct.s == "yes")
        {
            cout << "Enter amount of negociation:";
            cin >> ct.price;
            while (ct.price < 400000)
            {

                {
                    cout << "This amount is not acceptable for this car" << endl;
                    cout << "Plese increase amount:";
                    cin >> ct.price;
                }
            }
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees " << ct.price;
        }
        else if (ct.s == "no" || ct.price == 500000)
        {
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees 500000";
        }
    }
    else if (ct.n == "fortuner")
    {
        cout << ct.n << endl;
        cout << "The price for " << ct.n << " is 1000000" << endl;
        cout << "Do you want to negociate:";
        cin >> ct.s;
        if (ct.s == "yes")
        {
            cout << "Enter amount of negociation:";
            cin >> ct.price;
            while (ct.price < 900000)
            {

                {
                    cout << "This amount is not acceptable for this car" << endl;
                    cout << "Plese increase amount:";
                    cin >> ct.price;
                }
            }
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees " << ct.price;
        }
        else if (ct.s == "no" || ct.price == 1000000)
        {
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees 1000000";
        }
    }

    else if (ct.n == "landcruser")
    {
        cout << ct.n << endl;
        cout << "The price for " << ct.n << " is 1500000" << endl;
        cout << "Do you want to negociate:";
        cin >> ct.s;
        if (ct.s == "yes")
        {
            cout << "Enter amount of negociation:";
            cin >> ct.price;
            while (ct.price < 1400000)
            {

                {
                    cout << "This amount is not acceptable for this car" << endl;
                    cout << "Plese increase amount:";
                    cin >> ct.price;
                }
            }
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees " << ct.price;
        }
        else if (ct.s == "no" || ct.price == 800000)
        {
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees 800000";
        }
    }
}
void honda(car ch)
{
    cout << "Welcome to " << ch.C1.Cname;
    cout << "\nCivic\nAccord\nCity\nBR-V";
    cout << "\nEnter the name of the car you want:";
    cin >> ch.n;
    if (ch.n == "civic")
    {
        cout << ch.n << endl;
        cout << "The price for " << ch.n << " is 850000" << endl;
        cout << "Do you want to negociate:";
        cin >> ch.s;
        if (ch.s == "yes")
        { 
            cout << "Enter amount of negociation:";
            cin >> ch.price;
            while (ch.price < 750000)
            {

                {
                    cout << "This amount is not acceptable for this car" << endl;
                    cout << "Plese increase amount:";
                    cin >> ch.price;
                }
            }
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees " << ch.price;
        }
        else if (ch.s == "no" || ch.price == 850000)
        {
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees 850000";
        }
    }

    else if (ch.n == "Accord")
    {
        cout << ch.n << endl;
        cout << "The price for " << ch.n << " is 1100000" << endl;
        cout << "Do you want to negociate:";
        cin >> ch.s;
        if (ch.s == "yes")
        {
            cout << "Enter amount of negociation:";
            cin >> ch.price;
            while (ch.price < 1000000)
            {

                {
                    cout << "This amount is not acceptable for this car" << endl;
                    cout << "Plese increase amount:";
                    cin >> ch.price;
                }
            }
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees " << ch.price;
        }
        else if (ch.s == "no" || ch.price == 1100000)
        {
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees 1100000";
        }
    }
    else if (ch.n == "city")
    {
        cout << ch.n << endl;
        cout << "The price for " << ch.n << " is 500000" << endl;
        cout << "Do you want to negociate:";
        cin >> ch.s;
        if (ch.s == "yes")
        {
            cout << "Enter amount of negociation:";
            cin >> ch.price;
            while (ch.price < 400000)
            {

                {
                    cout << "This amount is not acceptable for this car" << endl;
                    cout << "Plese increase amount:";
                    cin >> ch.price;
                }
            }
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees " << ch.price;
        }
        else if (ch.s == "no" || ch.price == 500000)
        {
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees 500000";
        }
    }

    else if (ch.n == "BR-V")
    {
        cout << ch.n << endl;
        cout << "The price for " << ch.n << " is 1300000" << endl;
        cout << "Do you want to negociate:";
        cin >> ch.s;
        if (ch.s == "yes")
        {
            cout << "Enter amount of negociation:";
            cin >> ch.price;
            while (ch.price < 1200000)
            {

                {
                    cout << "This amount is not acceptable for this car" << endl;
                    cout << "Plese increase amount:";
                    cin >> ch.price;
                }
            }
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees " << ch.price;
        }
        else if (ch.s == "no" || ch.price == 1300000)
        {
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees 1300000";
        }
    }
}
void suzuki(car cs)
{
    cout << "Welcome to " << cs.C1.Cname;
    cout << "\nAlto\nMehran\nSwift\nCultus";
    cout << "\nEnter the name of the car you want:";
    cin >> cs.n;
    if (cs.n == "alto")
    {
        cout << cs.n << endl;
        cout << "The price for " << cs.n << " is 600000" << endl;
        cout << "Do you want to negociate:";
        cin >> cs.s;
        if (cs.s == "yes")
        {
            cout << "Enter amount of negociation:";
            cin >> cs.price;
            while (cs.price < 600000)
            {

                {
                    cout << "This amount is not acceptable for this car" << endl;
                    cout << "Plese increase amount:";
                    cin >> cs.price;
                }
            }
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees " << cs.price;
        }
        else if (cs.s == "no" || cs.price == 600000)
        {
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees 600000";
        }
    }

    else if (cs.n == "mehran")
    {
        cout << cs.n << endl;
        cout << "The price for " << cs.n << " is 300000" << endl;
        cout << "Do you want to negociate:";
        cin >> cs.s;
        if (cs.s == "yes")
        {
            cout << "Enter amount of negociation:";
            cin >> cs.price;
            while (cs.price < 200000)
            {

                {
                    cout << "This amount is not acceptable for this car" << endl;
                    cout << "Plese increase amount:";
                    cin >> cs.price;
                }
            }
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees " << cs.price;
        }
        else if (cs.s == "no" || cs.price == 300000)
        {
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees 300000";
        }
    }
    else if (cs.n == "swift")
    {
        cout << cs.n << endl;
        cout << "The price for " << cs.n << " is 700000" << endl;
        cout << "Do you want to negociate:";
        cin >> cs.s;
        if (cs.s == "yes")
        {
            cout << "Enter amount of negociation:";
            cin >> cs.price;
            while (cs.price < 600000)
            {

                {
                    cout << "This amount is not acceptable for this car" << endl;
                    cout << "Plese increase amount:";
                    cin >> cs.price;
                }
            }
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees " << cs.price;
        }
        else if (cs.s == "no" || cs.price == 600000)
        {
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees 600000";
        }
    }

    else if (cs.n == "cultus")
    {
        cout << cs.n << endl;
        cout << "The price for " << cs.n << " is 500000" << endl;
        cout << "Do you want to negociate:";
        cin >> cs.s;
        if (cs.s == "yes")
        {
            cout << "Enter amount of negociation:";
            cin >> cs.price;
            while (cs.price < 400000)
            {

                {
                    cout << "This amount is not acceptable for this car" << endl;
                    cout << "Plese increase amount:";
                    cin >> cs.price;
                }
            }
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees " << cs.price;
        }
        else if (cs.s == "no" || cs.price == 500000)
        {
            cout << "Congratulation!" << endl;
            cout << "You have purchased the car in rupees 500000";
        }
    }
}
int main()
{
    car c;
    cout << "Toyota\nHonda\nSuzuki" << endl;
    cout << "Enter the name of the company" << endl;
    cin >> c.C1.Cname;
    if (c.C1.Cname == "toyota")
    {
        toyota(c);
    }
    else if (c.C1.Cname == "honda")
    {
        honda(c);
    }
    else if (c.C1.Cname == "suzuki")
    {
        suzuki(c);
    }
    else
    {
        cout << "This brand is not available";
    }
}