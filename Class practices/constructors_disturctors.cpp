#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
    class Bird{
        private:
        string name;
        public:
        void setName(string n){
            name =n;
        }
        string getname(string &n){
            return(n);
        }
    };
int main(){
        Bird a;
        a.setName("Parrot");
        cout<<a.getname("Parrot");
       
    return 0;
}