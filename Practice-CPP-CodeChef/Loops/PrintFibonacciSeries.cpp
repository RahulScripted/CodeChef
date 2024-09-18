// Write a program to generate and print the first N terms of the Fibonacci series using a for-loop.


 #include <iostream>
using namespace std;
int main() {
    int num;
    // cout<<"Enter the number : ";
    cin>>num;
    int a = 0,b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 0;i < (num - 2);i++){
        int temp = a + b;
        cout<<temp<<" ";
        a = b;
        b = temp;
    }
}


// Output: 10
// 0 1 1 2 3 5 8 13 21 34