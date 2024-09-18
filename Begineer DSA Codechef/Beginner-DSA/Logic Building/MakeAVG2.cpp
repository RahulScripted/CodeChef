// You are given 2 integers - A and C. You need to find if there exists any integer B which meets the following condition B must be an integer B is the average of A and C.





#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int A, B, C;
        cin >> A >> C;
        
        if((A + C) % 2 == 0) cout<<((A + C) / 2)<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}