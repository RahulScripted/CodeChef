// Chef is struggling to pass a certain college course. The test has a total of N questions, each question carries 3 marks for a correct answer and -1 for an incorrect answer. Chef is a risk-averse person so he decided to attempt all the questions. It is known that Chef got X questions correct and the rest of them incorrect. For Chef to pass the course he must score at least P marks. Will Chef be able to pass the exam or not?




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        
        int noGet = x * 3 - (n - x) * 1;
        if(noGet >= p) cout<<"PASS"<<endl;
        else cout<<"FAIL"<<endl;
    }
}