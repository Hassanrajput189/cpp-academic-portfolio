#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    struct car{
        string brand;
        string model;
        int year;
    };
    int main(){
     car c1,c2;
        c1.brand="Toyota ";
        c1.model="Corolla";
        c1.year=2023;
        cout<<"Brand:"<<c1.brand<<endl;
        cout<<"Model:"<<c1.model<<endl;
        cout<<"year:"<<c1.year<<endl;
        
        c2.brand="Honda ";
        c2.model="Civic";
        c2.year=2023;
        cout<<"Brand:"<<c2.brand<<endl;
        cout<<"Model:"<<c2.model<<endl;
        cout<<"year:"<<c2.year<<endl;
    return 0;
}