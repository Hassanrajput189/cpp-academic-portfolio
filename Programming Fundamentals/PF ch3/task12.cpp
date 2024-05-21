#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a,b,c,d;char o,ch = '/';
    cout<<"Enter first number"<<endl;cin>>a;
    cout<<"Enter second number"<<endl;cin>>b;
    cout<<"You entered "<<a<<ch<<b<<endl;
    cout<<"Enter third number"<<endl;cin>>c;
    cout<<"Enter fourth number"<<endl;cin>>d;
    cout<<"You entered "<<c<<ch<<d<<endl;
    cout<<"Enter the operator"<<endl;o = getch();
    if(o=='+'){
        cout<<"Addition"<<endl<<(a*d+b*c)<<ch<<(b*d);
    }
    else if(o=='-'){
        cout<<"Substraction"<<endl<<(a*d-b*c)<<ch<<(b*d);
    }
    else if(o=='*'){
        cout<<"Multiplication"<<endl<<(a*c)<<ch<<(b*d);
    }
    else if(o=='/'){
        cout<<"Division"<<endl<<(a*d)<<ch<<(b*d);
    }
    else 
        cout<<"Enter the correct operator";
    return 0;
}