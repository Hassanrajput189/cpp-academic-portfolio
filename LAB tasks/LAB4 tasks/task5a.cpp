#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num;char space;
    cout<<"Enter any number"<<endl;cin>>num;
    cout<<"Enter space to print the square of "<<num<<endl;
    space = getch();
    if(space !=' '){
        cout<<"Invalid input"<<endl;
    }
    else 
        cout<<num*num<<endl;
    return 0;
}