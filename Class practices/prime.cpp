#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int x,y=0;
    cout<<"Enter a number"<<endl;cin>>x;
    for(int i=2;i<=x/2;i++){
    if(x%i==0){
        y=1;
        break;
    }
 }
 if(y==0){
    cout<<"Entered no is prime";
 }
 else {
    cout<<"Entered number is not prime";
 }
    return 0;
}