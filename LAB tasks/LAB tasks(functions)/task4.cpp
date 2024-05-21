#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    int min(int a,int b,int c){
        if(a<=b&&a<=c){
            return(a);
        }
        else if(b<=a&&b<=c){
            return(b);
        }
        else{
            return(c);
        }

    }
    int max(int a,int b,int c){
        if(a>=b&&a>=c){
            return(a);
        }
        else if(b>=a&&b>=c){
            return(b);
        }
        else{
            return(c);
        }

    }
int main(){
    int n1,n2,n3;
    cout<<"Enter first number:";cin>>n1;
    cout<<"Enter second number:";cin>>n2;
    cout<<"Enter third number:";cin>>n3;
    cout<<"The greater no is:"<<max(n1,n2,n3)<<endl;
    cout<<"The lesser no is:"<<min(n1,n2,n3);
    return 0;
}