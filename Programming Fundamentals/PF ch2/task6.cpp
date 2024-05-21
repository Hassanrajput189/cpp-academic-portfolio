#include<iostream>
using namespace std;

int main(){
    const float BP=1.487,franc=0.172,GD=0.584,JY=0.00955; int n;
    cout<<"Enter any number"<<endl;cin>>n;
    cout<<n<<"$ is equal to "<<BP*n<<" British pounds"<<endl;
    cout<<n<<"$ is equal to "<<franc*n<<" French franc"<<endl;
    cout<<n<<"$ is equal to "<<GD*n<<" German deutschemark"<<endl;
    cout<<n<<"$ is equal to "<<JY*n<<" Japanese yen"<<endl;
    return 0;
}