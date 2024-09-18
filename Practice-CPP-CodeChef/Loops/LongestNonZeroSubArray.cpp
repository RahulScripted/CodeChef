// Given an integer N representing the length of the array, followed by N elements of the array,Find the longest subarray that does not contain zero.


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
    int count  = 0,maxi = 0;
    for(int i = 0;i < num;i++){
        if(arr[i] != 0) count++;
        else count = 0;
        maxi = max(maxi,count);
    }
    cout<<maxi<<endl;
}


// Output: 3 4 0 1 2 3
//             3