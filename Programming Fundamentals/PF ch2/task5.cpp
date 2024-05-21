#include<iostream>
#include<ctype.h>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character"<<endl;
    cin>>ch;
    cout<<islower(ch);
    return 0;
}