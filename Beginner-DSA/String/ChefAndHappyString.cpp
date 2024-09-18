// Chef has a string S with him. Chef is happy if the string contains a contiguous substring of length strictly greater than 2 in which all its characters are vowels. Determine whether Chef is happy or not.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string s;
        cout<<"Enter the number : ";
        cin>>s;

        int count = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                count++;
                if(count == 3){
                    cout<<"Chef is happy"<<endl;
                    break;
                }
            }
            else count = 0;
        }
        if(count != 3) cout<<"Chef is sad"<<endl;
    }
}