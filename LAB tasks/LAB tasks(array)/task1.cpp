#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int arr[]={5,10,15,20,25};
    int size =sizeof(arr)/4;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<sum;
   
    return 0;
}