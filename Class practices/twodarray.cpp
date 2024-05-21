#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int arr[][3]={{1,2},{5,3},{13,9}};
    for(int row=0;row<3;row++){
        for(int column=0;column<2;column++){
        cin>>arr[row][column];
        }cout<<endl;
    }
    for(int row=0;row<3;row++){
        for(int column=0;column<2;column++){
        cout<<arr[row][column]<<" ";
        }cout<<endl;
    }
    return 0;
}