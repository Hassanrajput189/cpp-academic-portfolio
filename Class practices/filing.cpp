#include<iostream>
#include<fstream>
using namespace std;
    // class mall{        
    //     public:
    //     string name;
    //     int shops;
    //     mall(){
    //         cout<<"Welcome to Bulivard"<<endl;
    //     }
    //     void setname(){
    //         cin>>name;
    //     }
    //      void setshops(){
    //         cin>>shops;
    //     } 
    //     void getname(){
    //         cout<<name;
    //     } 
    //     void getshops(){
    //         cout<<name;
    //     }
    // };
    // class shop:public mall{
    //     public:
    //     string name;
    //     string type;
    //     void setname(){
    //         cin>>name;
    //     }
    //      void settype(){
    //         cin>>type;
    //     } 
    //     void getname(){
    //         cout<<name;
    //     } 
    //     void gettype(){
    //         cout<<type;
    //     }
    // };
    // class hotel:public mall{
    //     public:
    //     string name;
    //     string food_type;
    //     void setname(){
    //         cin>>name;
    //     }
    //      void setfood_type(){
    //         cin>>food_type;
    //     } 
    //     void getname(){
    //         cout<<name;
    //     } 
    //     void getfood_type(){
    //         cout<<food_type;
    //     }
    // };
int main(){
    ofstream writing;
    string data;
    writing.open("E:/C++/First_file.txt",ios::app);
    cout<<"Enter name of student";
    cin>>data;
    writing<<data;
    
    
    return 0;
}