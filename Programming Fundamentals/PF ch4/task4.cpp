#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    struct employee{
        int e1=0,e2=0,e3=0;
        float i1=100,i2=200,i3=300;
    };
int main(){
        employee n;
            cout<<"Enter 1 for the first employee"<<endl;cin>>n.e1;
             if(n.e1==1){
            cout<<"The income of the first employee is "<<n.i1<<"$"<<endl;
        }    
            cout<<"Enter 2 for the second employee"<<endl;cin>>n.e2;
            if(n.e2==2){
            cout<<"The income of the second employee is "<<n.i2<<"$"<<endl;
        } 
            cout<<"Enter 3 for the third employee"<<endl;cin>>n.e3;
            if(n.e3==3){
            cout<<"The income of the third employee is "<<n.i3<<"$"<<endl;
        }  
        else {
            cout<<"Exit"<<system("CLS");
         }
    return 0;
}