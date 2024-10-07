// Chef wants to appear in a competitive exam. To take the exam, there are following requirements: Minimum age limit is X (i.e. Age should be greater than or equal to X). Age should be strictly less than Y. Chef's current Age is A. Find whether he is currently eligible to take the exam or not.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int required,maxi,age;
        cin>>required>>maxi>>age;
        
        if(age >= required && age < maxi) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}