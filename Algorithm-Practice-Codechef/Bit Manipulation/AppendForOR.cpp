// Chef has an array A of length N. Chef wants to append a non-negative integer X to the array A such that the bitwise OR of the entire array becomes = Y i.e. (A1 ∣ A2 ∣ … ∣ AN ∣ X)=Y. (Here, ∣ denotes the bitwise OR operation) Determine the minimum possible value of X. If no possible value of X exists, output -1.



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int len,b;
        // cout<<"Enter the length of the array : ";
        cin>>len>>b;

        long arr[len],OR = 0;
        bool flag = false;
        for(int i = 0;i < len;i++){
            cin>>arr[i];
            OR |= arr[i];
        }

        for(int j = 0;j <= b;j++){
            if((OR | j) == b){
                cout<<j<<endl;
                flag = true;
                break;
            }
        }

        if(!flag) cout<<-1<<endl;
    }
}