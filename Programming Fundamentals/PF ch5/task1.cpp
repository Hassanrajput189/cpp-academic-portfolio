#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    float circarea(float r){
        return(2*3.142*r);
    }
int main(){
    float n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    cout<<"The area of the circle is "<<endl;
    cout<<circarea(n);

    return 0;
}