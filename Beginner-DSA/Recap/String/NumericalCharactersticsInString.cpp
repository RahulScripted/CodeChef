// For some programming problems, it is beneficial to treat numbers as strings. You are given an integer A. Can the digits of A be rearranged such that the resulting number is divisible by 5?




#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string A;
        cin >> A;
        int flag = 0;

        for (int i = 0; i < A.length(); i++){
            if (A[i] == '0' || A[i] == '5'){
                flag = 1;
                break;
            }
        }
        
        if (flag == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}