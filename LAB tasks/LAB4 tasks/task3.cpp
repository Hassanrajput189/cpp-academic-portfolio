#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character"<<endl;ch = getch();
    if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
        cout<<ch<<" is Vovel"<<endl;   
    }
    else 
        cout<<ch<<" is consonant";

    return 0;
}