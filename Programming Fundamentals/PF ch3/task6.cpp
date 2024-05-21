#include<iostream>
#include<conio.h>
using namespace std;

int main(){
        int fact =1,n;char ch;
  do{ 
    cout<<"Enter any number"<<endl;cin>>n;
    if(n<0){
        cout<<"invalid input";
    }
    else if(n>=0){
        for(int i=n;i>0;i--){
            fact*=i;
             }cout<<n<<"! ="<<fact;
             fact =1;
    } cout<<"\nEnter any key to contunue and 0 to exit"<<endl;ch =getch();
        if(ch =='0'){
            cout<<"Exit";
            break;
        }
  }while(ch != '0');
    return 0;
}