#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    int n=97;
    for(int i=1;i<=26;i++){
        cout<<(char)n<<'\t';n++;
        if(i==10){
            cout<<endl;
        }
        if(i==20){
            cout<<endl;
        }
    }
    return 0;
}