// Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".

#include<bits/stdc++.h>
using namespace std;
string LongestCommonPrefix(vector<string> &strs){
    int n = strs.size();
    sort(strs.begin(),strs.end());
    string first = strs[0],last = strs[n - 1];
    string s = "";
    for(int i = 0;i < (min((first.size()),last.size()));i++){
        if(first[i] == last[i]){
            s += first[i];
        }
        else return s;
    }
    return s;
}
int main(){
    vector<string> strs;
    strs.push_back("Flow");
    strs.push_back("Flower");
    strs.push_back("Flight");
    cout<<"Longest Common prefix : "<<LongestCommonPrefix(strs);
}