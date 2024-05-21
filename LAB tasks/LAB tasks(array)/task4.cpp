#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int arr[]={1,2,3,5,8,10,12,23,28,15};
    int size=sizeof(arr)/4;
    cout<<"the odd numbers in the array are"<<endl;
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}