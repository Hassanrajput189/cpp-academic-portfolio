#include<iostream>
using namespace std;

int main(){
    //task 1
    int size = 5;
    int SIZE = 10;
    cout<<"size = "<<size<<"SIZE"<<SIZE<<endl;
    SIZE+=size;
    size+=size;
    size-=size;
    SIZE=size;
    for(int i=1;i<=5;i++){
        size=i;
    }SIZE+=size;
    size+=SIZE;
    cout<<"size="<<size<<"SIZE="<<SIZE;
    return 0;
}