#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<"Last name"<<setw(15)<<"First name";
    cout<<setw(20)<<"Street Address"<<setw(10)<<"Town";
    cout<<setw(15)<<"State"<<endl;
    cout<<".................................................................................."<<endl;
    cout<<"Jones"<<setw(16)<<"Bernard"<<setw(22)<<"109 Pine Lane"<<setw(18)<<"Little town"<<setw(5)<<"MI"<<endl;
    cout<<"O'Brian"<<setw(13)<<"Coleen"<<setw(25)<<"42 E. 99th Ave."<<setw(12)<<"Bigcity"<<setw(9)<<"NY"<<endl;
    cout<<"Wong"<<setw(15)<<"Harry"<<setw(28)<<"121.A Alabama St."<<setw(12)<<"Lakeville"<<setw(7)<<"IL"<<endl;
    
    return 0;
}