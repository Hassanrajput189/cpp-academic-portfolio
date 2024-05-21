#include<iostream>
#include<iomanip>
#include<conio.h>
#include<typeinfo>
using namespace std;

int main(){
    char ch;string s;long l;
    for(int i=1;i<=6;i++){
        cout<<"Enter character:";ch=getche();
        s+=ch;
        cout<<endl;
    }
    cout<<stol(s)<<typeid(l).name();
    return 0;
}