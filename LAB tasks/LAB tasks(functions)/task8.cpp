#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    struct student{
        string name;
        int age;
    };
    void print(struct student n1,student n2){
        cout<<"The name of student is "<<n1.name<<"\nThe age of "<<n1.name<<" is "<<n2.age<<endl;
        cout<<"The name of student is "<<n2.name<<"\nThe age of "<<n2.name<<" is "<<n2.age<<endl;
    }
int main(){
    student s1,s2;
    s1.name="Hassan";
    s1.age=18;
    s2.name="Ali";
    s2.age=18;
    print(s1,s2);
    return 0;
}
