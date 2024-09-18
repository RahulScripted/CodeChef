// Write a program to take an n size array as an input and output the elements of the array in reverse order. You can do this by outputting elements one by one using a loop, starting from the last element(n−1) till the first element (0).




#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++) cin>>arr[i];
    
    for(int i = (n - 1);i >= 0;i--) cout<<arr[i]<<" ";
    cout<<endl;
}