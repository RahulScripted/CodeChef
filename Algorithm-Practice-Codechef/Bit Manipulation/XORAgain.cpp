// Chef recently discovered a function XOR(), which computes the XOR of all elements of a sequence: XOR(a1..n) = a1 ⊕ a2 ⊕⋯ ⊕ an.Chef has a sequence A with size N. He generated a new sequence B with size N^2 using the following formula: BiN + j + 1 = (Ai+1 + Aj+1)∀0≤i,j<N.Compute the value of XOR(B).



#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test case : ";
    cin>>testCase;
    while(testCase--){
        int len;
        // cout<<"Enter the length : ";
        cin>>len;

        int arr[len];
        int count = 0;
        for(int i = 0;i < len;i++){
            // cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
            count ^= arr[i];
        }
        cout<<(count * 2)<<endl; 
    }
}