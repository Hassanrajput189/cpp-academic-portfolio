#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    char ch,space;
    cout<<"Enter any character"<<endl;ch=getche();
    if(ch >= 'A'&& ch <='Z'||ch >= 'a'&& ch <='z')
    if(ch >= 'a'&& ch <='z'){
        cout<<" is in lower case"<<endl;
        cout<<"Enter spacebar to convert "<<ch<<" in upper case"<<endl;space=getch();
        if(space ==' '){
            ch-=32;
            cout<<"The upper case is "<<ch<<endl;
        }
        else {
            cout<<"invalid input";
        }   
    }  else if(ch >= 'A'&& ch <='Z'){
        cout<<" is in upper case"<<endl;
        cout<<"Enter spacebar to convert "<<ch<<" in lower case"<<endl;space=getch();
        if(space ==' '){
            ch+=32;
            cout<<"The lower case is "<<ch<<endl;
        }
        else {
            cout<<"invalid input";
        }   
    
    }
    else {
        cout<<"invalid character";
    return 0;
}
    }