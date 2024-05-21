#include<iostream>
using namespace std;

//int main(){
//int n,p=0;
//cout<<"Enter any number"<<endl;cin>>n;       
//for(int i=3;i<=n;i++){
//    if(n%i==0)
//    p++;
//}
//    if(p==2||n==1){
//        cout<<"Entered no is not prime";
//    }
//    else 
//        cout<<"Entered no is prime";
//}
//int main(){
//int max=7;
//for (int i=1;i<max;i++){
//	for(int j=1;j<=i;j++){
//		cout<<i;
//	}cout<<endl;
//}
//}
void input(int arr[]) {
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
}
void sum(int arr3[],int arr4[]){
	for(int i=0;i<3;i++){
		cout<<arr3[i]+arr4[i]<<endl;
	}
	}


int main() {
    const int max = 3;
    int arr1[max], arr2[max];
    cout <<"Enter values for the first array";
    input(arr1);
    cout << "Enter values for the second array";
    input(arr2);
    cout<<"the sum is"<<endl;
	sum(arr1,arr2);
    return 0;
}

