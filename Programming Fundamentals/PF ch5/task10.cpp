#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    void call(int &i){
        cout<<"I have been called "<<i<<" times";
        i++;
    }
int main(){
    int i=1;
    call(i);
    return 0;
}