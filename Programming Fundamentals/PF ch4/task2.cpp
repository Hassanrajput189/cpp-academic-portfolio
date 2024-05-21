#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
struct point{
    int x,y,z=x+y;
};
int main(){
    point p1,p2;
    cout<<"Enter cordinates for p1"<<endl;
    cin>>p1.x>>p1.y;
    cout<<"Enter cordinates for p2"<<endl;
    cin>>p2.x>>p2.y;
    cout<<"The sum of the cordinates is "<<p1.x+p2.x<<" "<<p1.y+p2.y;
    return 0;
}