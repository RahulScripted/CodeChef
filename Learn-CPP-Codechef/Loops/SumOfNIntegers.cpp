// Chef was given an integer input N. He wants to write a code using while loops to output the sum of all integers from 1 to N.



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int sum = 0;
    while(n > 0){
        sum += n;
        n--;
    }
    
    cout<<sum<<endl;
}