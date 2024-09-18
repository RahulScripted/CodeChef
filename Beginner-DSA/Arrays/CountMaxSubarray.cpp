// Given an array arr[] of N integers and an integer K. The task is to find the number of subarray with a maximum value equal to K.



#include <bits/stdc++.h>
using namespace std;

int totalSubArrays(int arr[], int N, int K){
    int ans = 0,i = 0;
    while(i < N){
        if(arr[i] > K){
            i++;
            continue;
        }
        int count = 0;
        while(i < N && arr[i] <= K){
            i++;
            count++;
        }
        ans += (((count) * (count + 1)) / 2); 
    }
    return ans;
}

int countSubarrays(int arr[], int N, int K){
    int count1 = totalSubArrays(arr,N,K - 1);
    int count2 = totalSubArrays(arr,N,K);
    return (count2 - count1);
}

int main() {
    int N, K;
    // cout<<"Enter the length : ";
    cin >> N;
    // cout<<"Enter the maximum value : ";
    cin >> K;
    int arr[N];
    for (int i = 0; i < N; i++) {
        // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
        cin >> arr[i];
    }
    cout << countSubarrays(arr, N, K) << endl;
    return 0;
}