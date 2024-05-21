#include<iostream>
using namespace std;

int main(){
     int num1,num2,num3;
    cout<<"Enter the value of num1"<<endl;cin>>num1;
    cout<<"Enter the value of num2"<<endl;cin>>num2;
    cout<<"Enter the value of num3"<<endl;cin>>num3;
    if(num1>num2&&num1>num3){
        cout<<num1<<" is greater"<<endl;
    }
    else if(num2>num1&&num2>num3){
        cout<<num2<<" is greater"<<endl;
    }
    else if(num3>num2&&num3<num1)
        cout<<num3<<" is greater"<<endl;
    else 
        cout<<"equal"<<endl;
    return 0;
}