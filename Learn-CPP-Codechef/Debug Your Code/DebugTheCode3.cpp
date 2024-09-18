// Chef has a bucket having a capacity of K liters. It is already filled with X liters of water. Find the maximum amount of extra water in liters that Chef can fill in the bucket without overflowing.



#include <iostream>
using namespace std;

int main() {
    int k, x;
    cin >> k >> x;
    cout<<(k - x)<<'\n';
}