#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int data[] = {1,3, 5, 11, 13, 19, 21, 99, 101};
    int SIZE = sizeof(data) / 4;
    
    for(int i=0; i<SIZE; i++) {
        if(data[i] % 2 != 0) {
            int odd = data[i];
            cout << odd << endl;
        }
    }       
    
    return 0;
}
