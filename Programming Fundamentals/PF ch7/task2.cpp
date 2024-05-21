#include<iostream>
using namespace std;

#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

    class Employee{
        private:
        string name;
        int id;
        public:
        void setname(string s){
            name=s;
        }
        string getname(){
            return(name);
        }
        // void setid(int n){
        //     cin>>n;
        //     id=n;
        // }
        // int getid(){
        //     return(id);
        // }
    };
int main(){
    int max=5;
    Employee e[max];int j;string s;
    cout<<"Enter name of the employee"<endl;
    for(int i=0;i<max;i++){
        cin>>s;
        e->setname(s);
     }
    // cout<<"Enter employee Id"<<endl;
    //  for(int i=0;i<max;i++){  
    //     e->setid(j);
    // }
    cout<<"The employees are "<<endl;
    for(int i=0;i<max;i++){
        cout<<e->getname()<<endl;
    }
    // for(int i=0;i<max;i++){
    //     cout<<e->getid()<<endl;
    // }
    return 0;
}
