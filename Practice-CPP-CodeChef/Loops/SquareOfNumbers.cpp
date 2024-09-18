// Write a program that uses a for-each loop to print the square of each element in list of N space separated integers, but skips elements greater than 10.


#include <iostream>
using namespace std;
int main() {
    int num;
    // cout<<"Enter the number : ";
	cin>>num;
    int arr[num];
    for(int i = 0;i < num;i++){
        // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
        cin>>arr[i];
    }
    // cout<<"Square will be : ";
    for(int ar : arr){
        if(ar <= 10){
            cout<<(ar * ar)<<endl;
        }
    }
}
