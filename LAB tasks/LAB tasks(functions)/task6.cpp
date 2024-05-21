#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    int func(int n,int p){
        int result =1;
        for(int i=0;i<p;i++){
            result*=n;
        }
        return(result);
        }
    
int main(){
    int n=2,p=3;  
    cout<<func(n,p);
    return 0;
}
