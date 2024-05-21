#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"Enter the value of num1"<<endl;cin>>num1;
    cout<<"Enter the value of num2"<<endl;cin>>num2;
    cout<<"Enter the value of num3"<<endl;cin>>num3;
    if(num1==num2&&num2==num3){
        cout<<"num1,num2 and num3 are equal"<<endl;
    }
    else if(num1>num2&&num2>num3){
        cout<<"num1,num2 and num3 are in increasing order"<<endl;
    }
    else if(num1<num2&&num2<num3)
        cout<<"num1,num2 and num3 are in decreasing order"<<endl;
    else 
        cout<<"no order"<<endl;
}