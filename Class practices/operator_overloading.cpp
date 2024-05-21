#include<iostream>
using namespace std;
    class Counter{
        private:
        int count;
        public:
        void setcount(int n){
            count =n;
        }
        int getcount(){
            return(count);
        }
        Counter(){count =0;}
        Counter operator +(Counter obj){
            Counter temp;
            temp.count=obj.count+count;
            return(temp);
        }
        void operator +=(Counter obj){
            count +=obj.count;
        }
        };
int main(){
    Counter a,b,c;
    b.setcount(10);c.setcount(20);
    a=b+c;
    cout<<a.getcount();
    

    

    return 0;
}