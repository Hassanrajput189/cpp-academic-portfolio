
#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char vowels[5];
    int vowel_count = 0;
    
    for(int i=0; i<26; i++) {
        if(alpha[i]=='a'||alpha[i]=='e'||alpha[i]=='i'||alpha[i]=='o'||alpha[i]=='u'){
            vowels[vowel_count] = alpha[i];
            vowel_count++;
        }
    }
    
    for(int j=0; j<5; j++) {
        cout << vowels[j] << endl;       
    }
    
    return 0;
}

