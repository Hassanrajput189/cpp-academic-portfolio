#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    struct students{
        int OBmarks;
        int Tmarks;
    };
int main(){
 students s;
    cout<<"Enter obtained marks "<<endl;cin>>s.OBmarks;
    cout<<"Enter total marks"<<endl;cin>>s.Tmarks;
    cout<<"The percentage is "<<endl<<(s.OBmarks*100)/s.Tmarks;

    return 0;
}