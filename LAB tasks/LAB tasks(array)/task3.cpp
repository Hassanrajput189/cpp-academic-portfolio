#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int j,n,arr[10]={1,2,3,5,8,10,12,23,28,15};
    cout<<"Enter any number"<<endl;cin>>n;
    for(int i=0;i<10;i++){
        if(n==arr[i]){
            cout<<"found at index "<<i;
            j=1;
            break;
        }
        else {
            ++j;
        }
    }
         if(j>1){
    cout<<"not found in the array";
   }
    return 0;

}