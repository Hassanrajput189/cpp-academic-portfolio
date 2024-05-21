#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int size,sum=0,product=1,arr[]={5,10,15,20,25};
     size =sizeof(arr)/4;
     for(int i=1;i<=2;i++){
        cout<<arr[size-i]<<" ";
        sum+=arr[size-i];
        product*=arr[size-i];
     }cout<<"\nthe sum is "<<sum;
     cout<<"\nThe product is "<<product;
    return 0;
}