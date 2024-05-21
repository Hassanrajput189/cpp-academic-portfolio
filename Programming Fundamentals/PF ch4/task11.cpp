#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    struct t{
        int hours;
        int minutes;
        int seconds;
    };
int main(){
    t t1,t2;char space;
    cout<<"Enter the value for t1"<<endl;
    cout << "Enter hours:" ;cin >> t1.hours;
    cout << "Enter minutes:" ;cin >> t1.minutes;
    cout << "Enter seconds:" ;cin >> t1.seconds;
    cout << t1.hours << ":" << t1.minutes << ":" << t1.seconds << " is equal to ";
    cout<< t1.hours * 3600 + t1.minutes * 60 + t1.seconds<<" seconds"<<endl;

    cout<<"Enter value for t2"<<endl;
    cout << "Enter hours:";cin >> t2.hours;
    cout << "Enter minutes:";cin >> t2.minutes;
    cout << "Enter seconds:";cin >> t2.seconds;
    cout << t2.hours << ":" << t2.minutes << ":" << t2.seconds << " is equal to ";
    cout << t2.hours * 3600 + t2.minutes * 60 + t2.seconds<<" seconds"<<endl;

    cout<<"Enter space to add and convert t1 and t2"<<endl;space=getch();
    if(space ==' '){
        int v1,v2,v3,v;
        v1=(t1.hours * 3600 + t1.minutes * 60 + t1.seconds);
        v2=(t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
        v3=(v1+v2);
        v=(v1+v2)%3600;
        cout<<"The sum is:"<<v3<<endl;
        cout<<"The time is "<<v3/3600<<":"<<v/60<<":"<<v%60<<endl;
    

    }    
    return 0;

}