#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int max=5;
    int arr[max]={5,2,1,3,4};
    for(int i=0;i<max;i++){
        if(arr[0]>arr[i]){
            int temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
        }
       }cout<<arr[0];                   

    return 0;
}