#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    struct volume{
        float  x,y,z;
    };
int main(){
    volume distance;
    cout<<"Enter the value of x"<<endl;cin>>distance.x;
    cout<<"Enter the value of y"<<endl;cin>>distance.y;
    cout<<"Enter the value of z"<<endl;cin>>distance.z; 
    cout<<"The volume is"<<endl<<distance.x*distance.y*distance.z;
    return 0;
}