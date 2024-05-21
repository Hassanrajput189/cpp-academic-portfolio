#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
const int size =3;
int min(int arr[size]){
    int m=arr[0];
    for(int i=1;i<size;i++){
        if(m>arr[i])
        m=arr[i];
        return m;
    }
}
int main(){
    
const int size =5;

    int A[size];
    cout<<"Enter value:";
    for(int i=0;i<size;i++){
        cout<<"A["<<i<<']';
        cin>>A[i];
    }
    int minimum=min(A);
    cout<<"Mininmum"<<minimum;
    return 0;
}