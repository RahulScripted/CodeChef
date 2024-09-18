// "if" and "else" can be used together to create conditions. The "else if" keyword means "if the previous conditions were not true, then try this condition"




#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 13;
    int b = 15;
    if (a >= b) cout << a << " is greater than or equal to " << b << endl;
    else cout << a << " is lesser than " << b << endl;

    a = 14;
    b = 14;
    if (a > b) cout << a << " is greater than " << b << endl; 
    else if (a == b) cout << a << " is equal to " << b << endl; 
    else cout << a << " is lesser than " << b << endl;
}