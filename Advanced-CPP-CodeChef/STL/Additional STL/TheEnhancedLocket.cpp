// Luna Lovegood found a mysterious locket in the Room of Requirement while searching for lost items. The locket has the power to influence the thoughts and actions of its possessor. Harry Potter wants to ensure that no one else has been influenced by this enchanted locket before Luna. You are given a list of N names of people who held the locket in sequence. For each person in the list, determine if they held the locket at any point before.





#include<bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin>>t;
    
    unordered_set<string>check;
    while(t--){
        string s;
        cin>>s;
        if(check.count(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        check.insert(s);
    }
}