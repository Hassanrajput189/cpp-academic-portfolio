#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    char n;
    cout<<"Enter any between a to z number"<<endl;n =getch();
    for(int i=1;i<=26;i++){
        cout<<n;n++;
        if(i==10){
            cout<<endl;

        }

    }
    return 0;
}