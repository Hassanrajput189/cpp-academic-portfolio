#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    struct Marks{
        int Mmarks;
        int Cmarks;
        int Pmarks;
        string Rnumber;
        string name;
    };
int main(){
    Marks s1,s2,s3,s4,s5;
    cout<<"Enter name of first the student"<<endl;cin>>s1.name;
    cout<<"Enter full roll number of the student"<<endl;cin>>s1.Rnumber;
    cout<<"Enter math marks"<<endl;cin>>s1.Mmarks;
    cout<<"Enter chemistry marks"<<endl;cin>>s1.Cmarks;
    cout<<"Enter physics marks"<<endl;cin>>s1.Pmarks;
    if(s1.Mmarks>100||s1.Cmarks>100||s1.Pmarks>100){
        cout<<"Marks cannot be greater than 100";
    }
    else
    {
        cout<<"Student:"<<s1.name<<endl<<"Roll number:"<<s1.Rnumber<<endl;
        cout<<"Percentage:"<<((s1.Mmarks+s1.Cmarks+s1.Pmarks)*100)/300;
    }
    cout<<"\nEnter name of second the student"<<endl;cin>>s2.name;
    cout<<"Enter full roll number of the student"<<endl;cin>>s2.Rnumber;
    cout<<"Enter math marks"<<endl;cin>>s2.Mmarks;
    cout<<"Enter chemistry marks"<<endl;cin>>s2.Cmarks;
    cout<<"Enter physics marks"<<endl;cin>>s2.Pmarks;
    if(s2.Mmarks>100||s2.Cmarks>100||s2.Pmarks>100){
        cout<<"Marks cannot be greater than 100";
    }
    else
    {
        cout<<"Student:"<<s2.name<<endl<<"Roll number:"<<s2.Rnumber<<endl;
        cout<<"Percentage:"<<((s2.Mmarks+s2.Cmarks+s2.Pmarks)*100)/300;
    }
    cout<<"\nEnter name of third the student"<<endl;cin>>s3.name;
    cout<<"Enter full roll number of the student"<<endl;cin>>s3.Rnumber;
    cout<<"Enter math marks"<<endl;cin>>s3.Mmarks;
    cout<<"Enter chemistry marks"<<endl;cin>>s3.Cmarks;
    cout<<"Enter physics marks"<<endl;cin>>s3.Pmarks;
    if(s3.Mmarks>100||s3.Cmarks>100||s3.Pmarks>100){
        cout<<"Marks cannot be greater than 100";
    }
    else
    {
        cout<<"Student:"<<s3.name<<endl<<"Roll number:"<<s3.Rnumber<<endl;
        cout<<"Percentage:"<<((s3.Mmarks+s3.Cmarks+s3.Pmarks)*100)/300;
    }
    cout<<"\nEnter name of fourth the student"<<endl;cin>>s4.name;
    cout<<"Enter full roll number of the student"<<endl;cin>>s4.Rnumber;
    cout<<"Enter math marks"<<endl;cin>>s4.Mmarks;
    cout<<"Enter chemistry marks"<<endl;cin>>s4.Cmarks;
    cout<<"Enter physics marks"<<endl;cin>>s4.Pmarks;
    if(s4.Mmarks>100||s4.Cmarks>100||s4.Pmarks>100){
        cout<<"Marks cannot be greater than 100";
    }
    else
    {
        cout<<"Student:"<<s4.name<<endl<<"Roll number:"<<s4.Rnumber<<endl;
        cout<<"Percentage:"<<((s4.Mmarks+s4.Cmarks+s4.Pmarks)*100)/300;
    }
    cout<<"\nEnter name of fifth the student"<<endl;cin>>s5.name;
    cout<<"Enter full roll number of the student"<<endl;cin>>s5.Rnumber;
    cout<<"Enter math marks"<<endl;cin>>s5.Mmarks;
    cout<<"Enter chemistry marks"<<endl;cin>>s5.Cmarks;
    cout<<"Enter physics marks"<<endl;cin>>s5.Pmarks;
    if(s5.Mmarks>100||s5.Cmarks>100||s5.Pmarks>100){
        cout<<"Marks cannot be greater than 100";
    }
    else
    {
        cout<<"Student:"<<s5.name<<endl<<"Roll number:"<<s5.Rnumber<<endl;
        cout<<"Percentage:"<<((s5.Mmarks+s5.Cmarks+s5.Pmarks)*100)/300;
    }
    return 0;
}