#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    struct employee{
        int e;
        float i;
    };
int main(){
        employee n1,n2;
            cout<<"Enter employee number"<<endl;cin>>n1.e;
            cout<<"enter employee income "<<endl;cin>>n1.i;
            cout<<"Enter employee number"<<endl;cin>>n2.e;
            cout<<"enter employee income "<<endl;cin>>n2.i;
            cout<<"The employee number is:"<<n1.e<<endl;
            cout<<"The income is "<<n1.i<<"$"<<endl;
            cout<<"The employee number is:"<<n2.e<<endl;
            cout<<"The income is "<<n2.i<<"$"<<endl;
    
    return 0;
}