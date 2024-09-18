// Nightking wants to attack the kingdom and he really likes cold days. However, he doesn’t want to attack the kingdom on the coldest day, because it is obvious. Instead, he will attack the second coldest day. Given an array A of N distinct integers where Ai represents the temperature forecast of the i-th day, You need to find the temperature of the day of the attack.




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        vector<long long>arr(n);
        for(int i = 0;i < n;i++) cin>>arr[i];
        
        int mini = INT_MAX,secondMini = INT_MAX;
        for(int i = 0;i < n;i++){
            if(mini > arr[i]){
                secondMini = mini;
                mini = arr[i];
            }
            else if(mini != arr[i] && secondMini > arr[i]){
                secondMini = arr[i];
            }
        }
        cout<<secondMini<<endl;
    }
}