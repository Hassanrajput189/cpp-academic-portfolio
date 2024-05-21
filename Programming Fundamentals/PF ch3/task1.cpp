#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter any number"<<endl;cin>>a;
    for(int i=1;i<=30;i++){
        cout<<i*a<<'\t';
        if(i==10){
            cout<<endl;
        }
        if(i==20){
            cout<<endl;
        }
    }
    return 0;
}