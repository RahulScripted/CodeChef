// Given an integer N less than 10, determine whether the number N is prime. If it is prime, print prime number; otherwise, print non-prime number.


#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    bool flag = true;
    for(int i = 2;i < num;i++){
        if(num % i == 0){
            flag = false;
            break;
        }
    }
    if(num <= 1){
        cout<<"non-prime number";
        return 0;
    }
    if(flag) cout<<"prime number";
    else cout<<"non-prime number";
}