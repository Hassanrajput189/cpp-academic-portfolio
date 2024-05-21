#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number"<<endl;
    cin>>num;
    if(num >=10 && num<=99){
        cout<<num<<" is double figure number"<<endl;
    }
    else 
        cout<<num<<" is not double figure"<<endl;
    return 0;
}