#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    char ch1,ch2;int i;
    cout<<"Enter first character:";ch1=getche();ch1+=1;
    cout<<endl<<"Enter second character:";ch2=getche();cout<<endl;
     for(i=1;ch1<ch2;i++){
         cout<<ch1<<'\t';ch1++;
     }cout<<endl<<"total no of characters = "<<i;
     return 0;
}