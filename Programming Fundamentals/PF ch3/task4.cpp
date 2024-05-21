#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    float num1,num2;char ch;
    do{
        cout<<"Enter first number"<<endl;cin>>num1;
        cout<<"Enter the operator"<<endl;ch =getche();
        cout<<"\nEnter second number"<<endl;cin>>num2;
        if(ch=='+'){
            cout<<num1+num2<<endl;
        }
    else if(ch=='-'){
        cout<<num1-num2<<endl;
        }
    else if(ch=='*'){
        cout<<num1*num2<<endl;
        }
    else if(ch=='/'){
        cout<<num1/num2<<endl;
        }
    else{ 
        cout<<"Enter the correct operator"<<endl;
    }
    cout<<"Enter 1 to continue and 0 to exit"<<endl;
    ch = getch();
}while(ch == '1'|| ch =='0');
}