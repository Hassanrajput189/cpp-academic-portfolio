#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int num =1;
    cout<<"Even numbers"<<"   "<<"Odd numbers";
    for(int i=num;i<=20;i++){
        if(i%2==0){
            cout<<setw(8)<<endl<<i;
        }
        if(i%2!=0){
            cout<<setw(20)<<endl<<i;
        }
    }

    return 0;
}