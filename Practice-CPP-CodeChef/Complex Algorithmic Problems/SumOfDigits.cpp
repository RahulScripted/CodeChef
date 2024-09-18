// Write a program to calculate the sum of the digits present in an alphanumeric string.


#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCase;
    cin>>testCase;
    while(testCase--){
        string str;
        // cout<<"Enter a string : ";
        cin >> str;
        int sum = 0; 
        for (char ch : str) {
            if (ch >= '0' && ch <= '9') {
                sum += ch - '0'; // Convert character to integer and add to sum
            }
        }
        // cout<<"Sum will be : ";
        cout << sum << endl;
    }
}



// Output:  1
//         Hel#284!lo23Chef

//         19