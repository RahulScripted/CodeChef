// Let's begin with a problem which covers our knowledge of 'String' syntax. You are given a string S consisting of only lowercase english characters. You need to generate 2 separate strings A and B. String A needs to be an exact replica of string S - it has to be created by starting with an empty string B is reverse of string S.




#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string S, A, B;
        cin >> S;
        
        for (int i = 0; i < S.length(); i++) A += S[i];
        for (int i = S.length() - 1; i >= 0; i--) B += S[i];
        
        for (int i = 0; i < S.length(); i++) cout << A[i];
        cout << endl;
        
        for (int i = 0; i < S.length(); i++) cout << B[i];
        cout << endl;
    }
}