#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter you age"<<endl;
    cin>>age;
    if(age>0){
    if(age<18){
        cout<<"you are not eligable to vote"<<endl;
    }
    else{
        cout<<"you are eligable to vote"<<endl;
    }
    }
    else 
        cout<<"invalid age"<<endl;
    return 0;
}