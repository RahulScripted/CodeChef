// Let us solve a problem on binary strings. You are given 2 separate binary strings - A and B - both of equal length. You need to output the following: Count of '1's in each string. Count of indices (i) where A[i] = B[i].




#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string A, B;
        cin >> A >> B;
            
        int a_count = 0;
        int b_count = 0;
        int common = 0;
            
        for (int i = 0; i < A.length(); i++){
            if (A[i] == '1') a_count++;
        }

        for (int i = 0; i < B.length(); i++){
            if (B[i] == '1') b_count++;
        }
            
        for (int i = 0; i < A.length(); i++){
            if (A[i] == B[i]) common++;
        }
            
        cout << a_count << " " << b_count << " " << common << endl;
    }
}