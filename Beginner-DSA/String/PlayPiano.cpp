// Two sisters, A and B, play the piano every day. During the day, they can play in any order. That is, A might play first and then B, or it could be B first and then A. But each one of them plays the piano exactly once per day. They maintain a common log, in which they write their name whenever they play. You are given the entries of the log, but you're not sure if it has been tampered with or not. Your task is to figure out whether these entries could be valid or not.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string maintainLog;
        cout<<"Enter the maintained log : ";
        cin>>maintainLog;

        bool flag = true;
        for(int i = 0;i < (maintainLog.length());i += 2){
            if(maintainLog[i] == maintainLog[i + 1]){
                flag = false;
                break;
            }
        }

        if(flag) cout<<"These entries are valid"<<endl;
        else cout<<"These entries are not valid"<<endl;
    }
}