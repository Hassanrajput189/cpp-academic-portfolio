#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int num1,num2;char ch;
    cout<<"Enter the value of num1"<<endl;cin>>num1;
    cout<<"Enter the value of num2"<<endl;cin>>num2;
    cout<<"Enter the operator"<<endl;ch =getch();
    if(ch =='+'){
        cout<<num1<<ch<<num2<<" = "<<num1+num2<<endl;
    }
    else if(ch =='-'){
        cout<<num1<<ch<<num2<<" = "<<num1-num2<<endl;
    }
    else if(ch =='*'){
        cout<<num1<<ch<<num2<<" = "<<num1*num2<<endl;
    }
    else if(ch =='/'){
        cout<<num1<<ch<<num2<<" = "<<num1/num2<<endl;
    }
    else if(ch =='%'){
        cout<<num1<<ch<<num2<<" = "<<num1%num2<<endl;
    }
    else 
        cout<<"Enter the correct operator";
    return 0;
}