#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    enum etype {laborer,secretary,manager,accountant,executive,researcher};
int main(){
    etype e; char ch;
    cout<<e{0};
    cout<<"Enter the first character of the employee"<<endl;
    ch =getche();
    switch(e){
        case 'l':cout<<"\nThe employee type is laborer";
        break;
        case 's':cout<<"\nThe employee type is secretary";
        break;
        case 'm':cout<<"\nThe employee type is manager";
        break;
        case 'a':cout<<"\nThe employee type is accountant";
        break;
        case 'e':cout<<"\nThe employee type is executive";
        break;
        case 'r':cout<<"\nThe employee type is researcher";
        break;
        default:cout<<"their is no employee of "<<ch<<" type";
        break;
    }

    return 0;
}