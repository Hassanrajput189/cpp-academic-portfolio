#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(){
    for(int i='A';i<='Z';i++){
        if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
        cout<<(char)i<<endl;
    else
        cout<<setw(10)<<(char)i<<endl;
    }
    return 0;
}