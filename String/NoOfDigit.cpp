// Return the total number of digits in a number without using any loop.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int digit = 12345;
    string re = to_string(digit);
    int result = re.length();
    cout<<"Length will be : "<<result;
}