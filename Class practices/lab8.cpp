#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

     struct company {
            string Cname;
        };
     struct car{
        char name;
        string catagory;
        int price;
        company c1;
     };
int main(){
        car c;
        cout<<"Yaris,Civic,Coure,Alto"<<endl;
        cout<<"Enter only the first letter of the car"<<endl;
        c.name=getch();
        if(c.name=='y'){
            c.c1.Cname="\nToyota";
            cout<<"Company:"<<c.c1.Cname<<endl<<"Yaris";
            cout<<"\nThe price is ";
            c.price=600000;
            cout<<c.price;
        }
        else if(c.name=='C'){
            c.c1.Cname="\nHonda";
            cout<<"Company:"<<c.c1.Cname<<endl<<"Civic";
            cout<<"\nThe price is ";
            c.price=800000;
            cout<<c.price;
        }
        else if(c.name=='c'){
            c.c1.Cname="\nDahitsu";
            cout<<"Company:"<<c.c1.Cname<<endl<<"coure";
            cout<<"\nThe price is ";
            c.price=400000;
            cout<<c.price;
        }
        else if(c.name=='a'){
            c.c1.Cname="\nSuzuki";
            cout<<"Company:"<<c.c1.Cname<<endl<<"Alto";
            cout<<"\nThe price is ";
            c.price=500000;
            cout<<c.price;
        }
        else {
            cout<<"\nstock not avalable";
        }
    return 0;
}