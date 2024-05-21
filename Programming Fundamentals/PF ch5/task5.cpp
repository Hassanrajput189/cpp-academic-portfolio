#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    long hms_to_sec(int h,int m,int s){
        cout<<"You entered:"<<h<<":"<<m<<":"<<s<<endl;
        long t=(h*3600)+(m*60)+s;
        return(t);
    }
    int main(){                                
        int h,m,s;
        cout<<"Enter hours"<<endl;cin>>h;
        cout<<"Enter minutes"<<endl;cin>>m;
        cout<<"Enter seconds"<<endl;cin>>s;
        cout<<"The time in seconds is "<<hms_to_sec(h,m,s);
        return 0;
}