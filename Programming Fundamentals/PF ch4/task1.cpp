#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

struct phone{
    string code,exchange,number;
};

int main(){
    char c;
    phone  address1={"212","767","8900"};
    phone  address2;
    cout<<"Enter the code"<<endl;
    for(int i=1;i<=3;i++){
        c=getche();
        address2.code+=c;
    }
    cout<<"\nEnter the exchange"<<endl;
    for(int j=1;j<=3;j++){
         c=getche();
        address2.exchange+=c;
    }
    cout<<"\nEnter the number"<<endl;
    for(int k=1;k<=4;k++){
         c=getche();
        address2.number+=c;
    }
    cout<<"Your number is"<<endl<<"("<<address1.code<<") "<<address1.exchange<<"-"<<address1.number<<endl;
    cout<<"Your number is"<<endl<<"("<<address2.code<<") "<<address2.exchange<<"-"<<address2.number;
    
    return 0;
}