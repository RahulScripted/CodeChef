// You are given an array A containing N integers, and an integer K (1 ≤ K ≤ N). Find the number of subarrays of A with length K whose bitwise OR is odd.




#include <iostream>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test case : ";
    cin>>testCase;
    while(testCase--){
        int n,k;
        cin>>n>>k;
        
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        
        int x=0;
        int ans=0;
        for(int i=0;i<n-k+1;i++){
            for(int j=i;j<i+k;j++){
                if(a[j]%2!=0){
                    x=1;
                    break;
                }
            }
            if(x==1)ans++;
            x=0;
        }
        
        cout<<ans<<endl;
    }
}