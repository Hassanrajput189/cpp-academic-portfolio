#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    struct info{
        string name;
        int ACnumber; 
        int balance;
    };
     void print(info c1,info c2){
        cout<<"Name:"<<c1.name<<endl<<"Account no:"<<c1.ACnumber<<endl<<"Balance:"<<c1.balance<<endl;
        cout<<"Name:"<<c2.name<<endl<<"Account no:"<<c2.ACnumber<<endl<<"Balance:"<<c2.balance;
     }
int main(){
    info c1,c2;
    c1.name="Hassan";
    c1.ACnumber=1;
    c1.balance=1000000;
    c2.name="Ali";
    c2.ACnumber=2;
    c2.balance=2000000;
    print(c1,c2);
    return 0;
}