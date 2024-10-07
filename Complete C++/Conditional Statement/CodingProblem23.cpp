// You are given three distinct positive integers X,Y, and Z. Your task is to find integers A and B such that: B is equal to one of the three given numbers;A is equal to the product of remaining two numbers. A is divisible by B. Print A and B which satisfy the given conditions. If no such pair of A and B exists, print -1 instead.




#include<iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
        if((x * y) % z == 0) cout << x * y << " " << z << "\n";
        else if((z * y) % x == 0) cout << z * y << " " << x << "\n";
        else if((x * z) % y == 0) cout << x * z << " " << y << "\n";
        else cout << -1 << "\n";
    }
}