// Given two integer N and x, generate a sequence of N integers starting from x and each successive integer is 1 greater than current one. Then, reverse the generated sequence and print them.




#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, x;
    cin >> n >> x;
    
    vector < int > arr(n);
    
    iota(arr.begin(), arr.end(), x); // Assigns values from x
    reverse(arr.begin(), arr.end());
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}