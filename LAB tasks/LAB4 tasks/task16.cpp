#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num;char space;
    cout<<"Enter any number"<<endl;cin>>num;
    if(num!=0){
    if(num%2==0){
        cout<<num<<" is Even"<<endl<<"Enter space bar to make it odd";space =getch();
        if(space ==' '){ 
        num+=1;cout<<endl<<num; 
        }
        else 
        cout<<"Invalid input";
    }
    else if(num%2!=0){
        cout<<num<<" is Odd"<<endl<<"Enter space bar to print the square";space = getch();
        if(space ==' '){
            num*=num;cout<<endl<<num;
        }
    }
    }
    else {
        cout<<"Enter space bar to make "<<num<<" double figure";space = getch();cout<<endl;
        if(space==' '){ 
        num+=10;cout<<num<<endl;
        cout<<"Enter space bar again to print its cube"<<endl;space = getch();
        if(space==' '){
        cout<<num*num*num;
        }
    }
}
return 0;
    }
  