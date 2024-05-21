#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int size,arr[]={5,10,15,20,25};
     size =sizeof(arr)/4;
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
        }
    return 0;
}