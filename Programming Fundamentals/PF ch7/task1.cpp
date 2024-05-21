#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    void reversit(char ch){
        int max=12;
        cout<<"Enter the string"<<endl;
        char ar[max];
        for(int i=0;i<max;i++){
            ar[i]=getche();
        }cout<<endl;
        for(int i=0;i<max;i++){
       for(int j=i;j<max;j++){
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
       }cout<<ar[i];
    }
    }
int main(){
    char arr[8];
    char a;
          reversit(a);

    return 0;
}