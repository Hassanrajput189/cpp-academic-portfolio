#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int n,t1=0,t2=1,t3;
    cout<<"Enter no of terms"<<endl;cin>>n;
    cout<<t1<<" "<<t2;
    for(int i=1;i<=n;++i){
        t3=t1+t2;
        t1=t2;  
        t2=t3;
        cout<<" "<<t3<<" ";
    }
    return 0;
}