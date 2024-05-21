#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    int dis(int a,int b){
        if(a>b){
            return(a);
        }
        else {
            return(b);
        }
    }
int main(){
    int x,y;
    cout<<"Enter first distance"<<endl;cin>>x;
    cout<<"Enter second distance"<<endl;cin>>y;
    cout<<dis(x,y)<<" is larger";
    return 0;
}