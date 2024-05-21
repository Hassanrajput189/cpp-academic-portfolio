#include<iostream>
using namespace std;

int main(){
    int y;float i,r;
    cout<<"Enter initial amount"<<endl;cin>>i;
    cout<<"Enter number of years"<<endl;cin>>y;
    cout<<"Enter interest rate"<<endl;cin>>r;
    for(int j=1;j<=y;j++){
        cout<<"after "<<j<<" years you will have "<<i+(i*r/100)<<endl;
        i=i+(i*r/100);
    }
    return 0;
}