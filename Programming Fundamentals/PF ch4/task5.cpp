#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    struct date{
        string month,day,year;
    };
int main(){
    date d;char ch;
    cout<<"Enter date"<<endl;
    for(int i=1;i<=2;i++){
        ch =getche();
        d.day+=ch;
         if(ch==' '){
            break;
        }
    }
     cout<<"/";
    for(int i=1;i<=2;i++){
        ch=getche();
        d.month+=ch;
        if(ch==' '){
            break;
        }
    }
     cout<<"/";
    for(int i=1;i<=4;i++){
        ch=getche();
        d.year+=ch;
         if(ch==' '){
            break;
        }
    }
    cout<<"\nYou entered:"<<d.month<<"/"<<d.day<<"/"<<d.year;
    cout<<"\nMonth:"<<d.month<<endl;
    cout<<"day:"<<d.day<<endl;
    cout<<"year:"<<d.year;
    return 0;
}