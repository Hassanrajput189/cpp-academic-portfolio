#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    void zerosmaller(int x,int y){ 
        if(x<y){
            cout<<y<<" "<<(x=0);
        }
        else{
            cout<<x<<" "<<(y=0);
        } 
    }
int main(){
    int x,y;
    cout<<"Enter first number"<<endl;cin>>x;
    cout<<"Enter second number"<<endl;cin>>y;
    cout<<"The smaller no is"<<endl;
    zerosmaller(5,6);
    return 0;
}
