#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    enum subject {PF,AC,AP,IICT,FE};
int main(){
    int input=0,total=150;
    int obmarks=0;float per;
    cout<<"Enter your marks "<<endl;
    for(int i=PF;i<=FE;i++){
        cin>>input;
        if(PF>30){
            cout<<"Marks can not be greater than 30";
        }
        if(AC>30){
            cout<<"Marks can not be greater than 30";
        }
        if(AP>30){
            cout<<"Marks can not be greater than 30";
        }
        if(IICT>20){
            cout<<"Marks can not be greater than 20";
        }
        if(FE>30){
            cout<<"Marks can not be greater than 30";
        }
        obmarks+=input;
    }
    per=(obmarks*100)/total;
    cout<<per;


    
    
    return 0;
}