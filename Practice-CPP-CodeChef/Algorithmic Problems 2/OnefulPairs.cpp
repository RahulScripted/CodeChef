// Chef defines a pair of positive integers (a,b) to be a  Oneful Pair. If a + b + (a ⋅ b) = 111. Which of these pairs are  Oneful Pair?


#include <iostream>
using namespace std;
int main() {
    int a,b;
    // cout<<"Enter the value of a : ";
    cin>>a;

    // cout<<"Enter the value of b : ";
    cin>>b;

    if(a + b + (a * b) == 111) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}


// Output: 1 55
//          Yes