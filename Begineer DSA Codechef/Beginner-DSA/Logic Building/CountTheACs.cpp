// There are 10 problems in a contest. You know that the score of each problem is either 1 or 100 points. Chef came to know the total score of a participant and he is wondering how many problems were actually solved by that participant. Given the total score P of the participant, determine the number of problems solved by the participant. Print -1 in case the score is invalid.





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int question = (n / 100) + ((n % 100) / 1);
        if(question <= 10) cout<<question<<endl;
        else cout<<-1<<endl;
    }
}