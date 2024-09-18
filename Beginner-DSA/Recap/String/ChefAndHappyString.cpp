// Chef has a string S with him consisting of only lowercase alphabets. Chef is happy if the string contains a contiguous substring of length strictly greater than 2 in which all its characters are vowels. Determine whether Chef is happy or not.





#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	
	while(t--){
	    string s;
	    cin >> s;
	    
	    int count = 0;
	    bool flag = false;
	    int n = s.length();
	    for(int i = 0;i < n;i++){
	        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count++;
	        else count = 0;
	        if(count > 2){
	                flag = true;
	                break;
	        }
	    }
	    
	    if(flag) cout<<"Happy"<<endl;
	    else cout<<"Sad"<<endl;
	}
}