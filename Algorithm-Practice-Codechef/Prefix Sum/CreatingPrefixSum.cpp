// A "prefix array" is a data structure commonly used in programming, particularly in algorithms related to strings or arrays. Also known as a "prefix sum array", it stores cumulative sums of elements in an array. We generally use it to optimize the time complexity of a given algorithm. Using a prefix array in an array of integers: -

// array (a)        -> [1, 2, 3, 4, 5, 6, 7, 8, 9]
// prefix array (b) -> [1, 3, 6, 10, 15, 21, 28, 36, 45]

// We created a prefix array, which stores a cumulative sum of all the previous indexes of the array. This is our prefix array for a.




#include <bits/stdc++.h>
using namespace std;
int main() {
    int len;
    // cout<<"Enter the length : ";
    cin>>len;

    int arr[len];
    for(int i = 0;i < len;i++){
        // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
        cin>>arr[i];
    }

    // Prefix Array
    for(int i = 1;i < len;i++){
        arr[i] += arr[i - 1];
    }

    // Printing
    for(int i = 0;i < len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}