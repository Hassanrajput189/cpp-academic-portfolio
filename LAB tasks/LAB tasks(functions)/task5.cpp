#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
     void swap(int &x,int &y){
        cout<<"Before swapping "<<x<<" "<<y<<endl;
        int temp=x;
        x=y;
        y=temp;
        cout<<"After swapping "<<x<<" "<<y;
    }
int main(){
 int x,y;
    cout<<"Enter first number"<<endl;cin>>x;
    cout<<"Enter second number"<<endl;cin>>y;
    swap(x,y);
    return 0;
}