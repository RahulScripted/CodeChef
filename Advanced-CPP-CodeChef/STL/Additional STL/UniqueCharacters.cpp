// You are given a string of size N. Count the number of distinct characters in it.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    string str;
    cin>>str;
    
    set<char>s;
    for(int i = 0;i < n;i++){
        s.insert(str[i]);
    }
    
    cout<<s.size()<<endl;
}