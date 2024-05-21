#include<iostream>
#include<iomanip>
#include<conio.h>
#include<windows.h>
using namespace std;

int main(){
    int a=1;
    int max=16;
    for(int i=1;i<=max;i++){
      cout<<a<<" ";a++;
      if(i==4){
        a+=a;
        cout<<a<<endl;
        a=i+1;
      }
      if(i==8){
        a+=a;
        cout<<a<<endl;
        a=i+1;
      }
      if(i==12){
        a+=a;
        cout<<a<<endl;
        a=i+1;
      }
      if(i==16){
        a+=a;
        cout<<a<<endl;
        a=i+1;
      }

   }
}