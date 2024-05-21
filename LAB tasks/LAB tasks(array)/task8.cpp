#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int max=5;
    int arr[max];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<max;i++){
        cin>>arr[i];
    }
    cout<<"the elements are"<<endl;
    for(int i=0;i<max;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}