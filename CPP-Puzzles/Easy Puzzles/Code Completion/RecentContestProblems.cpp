// Given a list of N contest codes, where each contest code is either START38 or LTIME108, help Chef count how many problems were featured in each of the contests.




#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        
        vector<string> arr(n);
        for(int i = 0;i < n;i++) cin >> arr[i];
        
        int S = 0,L = 0;
        for(int i = 0;i < n;i++){
            if(arr[i] == "START38") S++;
            else L++;
        }
        
        cout<<S<<" "<<L<<endl;
    }
}