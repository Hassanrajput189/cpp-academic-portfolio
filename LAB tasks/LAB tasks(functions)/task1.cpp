#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    int largenum(int n1,int n2){
        if(n1>n2){
            return(n1);
        }
        else {
            return(n2);
        }
    }
int main(){
    int a,b;
    cout<<"Enter first number"<<endl;cin>>a;
    cout<<"Enter second number"<<endl;cin>>b;
    cout<<largenum(a,b)<<" is greater";

    return 0;
}