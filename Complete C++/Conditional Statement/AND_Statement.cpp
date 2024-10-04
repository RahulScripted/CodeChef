// The && keyword is a logical operator, which is used to combine conditional statements.




#include <iostream>
using namespace std;

int main(){
    int a, b; 
    a = 15;
    b = 35;

    if(a % 7 == 0 && a % 5 == 0) cout << "The number is divisible by both 5 & 7\n";
    else cout << "The number is not divisible by both 5 & 7\n";


    if(b % 7 == 0 && b % 5 == 0) cout << "The number is divisible by both 5 & 7\n";
    else cout << "The number is not divisible by both 5 & 7\n";
}