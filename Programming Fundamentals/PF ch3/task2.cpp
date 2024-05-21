#include<iostream>
using namespace std;

int main(){
    int n;float t;
    cout<<"Enter 1 for Celcius and 2 for Fahrenhiet"<<endl;cin>>n;
    if(n==1){
        cout<<"Enter temperature in Celcius"<<endl;
        cin>>t;
        cout<<"The temperature in Fehrenhiet is"<<endl<<(1.8*t)+32;
    }
    else if(n==2){
        cout<<"Enter temperature in Fahrenhiet"<<endl;
        cin>>t;
        cout<<"The temperature in Celcius is"<<endl<<5*(t-32)/9;
    }
    else 
        cout<<"Enter 1 or 2";
    return 0;
}