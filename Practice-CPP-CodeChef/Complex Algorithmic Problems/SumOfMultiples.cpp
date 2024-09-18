// Write a program to find the sum of all the numbers in the array that are multiples of 3.


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int testCase;
    cin>>testCase;
    while(testCase--){
        int size;
        // cout<<"Enter the size of the array : ";
        cin>>size;
        int arr[size];
        for(int i = 0;i < size;i++){
            // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }
        int sum = 0;
        for(int i = 0;i < size;i++){
            if(arr[i] % 3 == 0) sum += arr[i];
        }
        // cout<<"Sum will be : ";
        cout<<sum<<endl;
    }
    return 0;
}




// Output:  2             |
//          4             |
//          1 2 3 9       |   12
//          5             |
//          1 2 4 5 7     |   0