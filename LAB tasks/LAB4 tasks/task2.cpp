#include<iostream>
using namespace std;

int main(){
    float classes,classesattended;
cout<<"enter total number of classes"<<endl;cin>>classes;
cout<<"enter the number of classes attended"<<endl;cin>>classesattended;
float total = (classesattended/classes*100);
cout<<"your Percentage ="<<(float)total<<endl;
if(total>=75)
cout<<"you are eligible to sit in the examination";
else if(total>=69.9&&total<=74.9)
cout<<"you should maintain your attendence";
else{
cout<<"you are not eligible to sit in the examination";
    return 0;
    }
}