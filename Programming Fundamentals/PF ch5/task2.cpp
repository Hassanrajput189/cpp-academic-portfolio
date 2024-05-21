#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    double power(double n,int p=2){
        for(int i=1;i<p;i++){
            n*=n;
        }return(n);
        
    }
int main(){
    double n;int p;
    cout<<"Enter any number"<<endl;cin>>n;
    cout<<"Enter the power"<<endl;cin>>p;
    cout<<power(n,p);
    
    return 0;
}