#include<iostream>
using namespace std;

int main(){
    int pounds,shellings,pence,total_pence;
    double decimal_pounds;
    cout<<"Enter no of pounds"<<endl;cin>>pounds;
    cout<<"Enter no of shellings"<<endl;cin>>shellings;
    cout<<"Enter no of pence"<<endl;cin>>pence;
    cout<<"You entered"<<pounds<<"."<<shellings<<"."<<pence<<endl;
    total_pence= (pounds*20*12)+(shellings*12)+pence;
    decimal_pounds=total_pence/100.0;
    cout<<"Decimal pounds = "<<decimal_pounds<<'\x9c'<<endl;
    return 0;
}