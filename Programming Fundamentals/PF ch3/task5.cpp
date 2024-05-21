#include<iostream>
using namespace std;

int main(){
    int n=20;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
         for(int k=1;k<i;k++){
             cout<<"x";
         }
         for(int l=1;l<=i;l++){
            cout<<"x";
         }cout<<endl;
    }
}