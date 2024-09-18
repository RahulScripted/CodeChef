// Write a program using a 'for' loop to find and print the index of the first occurrence of the number 8 in any given list of N integers.


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

    int idx = -1;
    for(int i  = 0;i < (num - 1);i++){
        for(int j = (i + 1);j < num;j++){
            if(arr[i] == arr[j]){
                idx = i;
                break;
            }
        }
    }
    // cout<<"The first occurrence's index will be : ";
    cout<<idx;
}