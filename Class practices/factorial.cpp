#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int fact= 1;int n;
    cout<<"Enter any number";cin>>n;
    for(int i=n;i>0;i--){
      fact*=i;
    }cout<<fact;
    return 0;
}