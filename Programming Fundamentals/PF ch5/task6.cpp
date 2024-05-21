#include<iostream>
#include<conio.h>
using namespace std;
struct time{
    int hours; 
    int minutes; 
    int seconds;
};
long time_to_secs(time t){
    return (t.hours*3600+t.minutes*60+t.seconds);
}

time secs_to_time(long s){
    time t; 
        long f =s%3600;
       t.hours=s/3600;
       t.minutes=f/60;
       t.seconds=f%60;
    return t;
}
time sum(time &t1,long &t){
  time tx;
   tx.hours= t1.hours+secs_to_time(t).hours;
   tx.minutes=t1.minutes+secs_to_time(t).minutes;
   tx.seconds=t1.seconds+secs_to_time(t).seconds;
   return (tx);
}



int main()
{
    time t1;long t; 
    cout<<"Enter time value"<<endl;
    cout<<"Enter hours:";cin >>t1.hours;
    cout<<"Enter minutes:";cin>>t1.minutes;
    cout<<"Enter seconds:";cin>>t1.seconds;
    cout<<"Time in seconds: "<<time_to_secs(t1)<<endl; 
    cout<<"Enter time in seconds"<<endl;cin>>t;
    cout<<"Time in hh:mm:ss format: "<<secs_to_time(t).hours<<":"<<secs_to_time(t).minutes<<":"<<secs_to_time(t).seconds;
    cout<<"The total time is:"<<sum(t1,t).hours<<":"<<sum(t1,t).minutes<<":"<<sum(t1,t).seconds;
}
