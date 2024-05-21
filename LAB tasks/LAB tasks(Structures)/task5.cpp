#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    struct person{
        string name;
        int age;
        bool do_programming;
    };
int main(){
    person p1,p2;
    p1.name="Hassan";
    p1.age=18;
    p1.do_programming=true;
    cout<<"name:"<<p1.name<<endl<<"age:"<<p1.age<<endl<<"do_programming:"<<p1.do_programming;
    p2.name="Bilal";
    p2.age=20;
    p2.do_programming=false;
    cout<<"\nname:"<<p2.name<<endl<<"age:"<<p2.age<<endl<<"do_programming:"<<p2.do_programming;
    
    return 0;
}