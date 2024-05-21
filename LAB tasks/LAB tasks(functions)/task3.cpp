#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    void swap(int a, int b){
        cout<<"Before swapping "<<a<<" "<<b<<endl;
        int temp=a;
        a=b;
        b=temp;
        cout<<"After swapping "<<a<<" "<<b;
    }
int main(){
    int x,y;
    cout<<"Enter first number"<<endl;cin>>x;
    cout<<"Enter second number"<<endl;cin>>y;
    swap(x,y);
    return 0;
}