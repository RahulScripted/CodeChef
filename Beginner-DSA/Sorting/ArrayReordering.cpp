// You are given two arrays A and B of size N. Given a function F such that. F (i,j) = Ai + Bj Reorder the arrays A and B such that F (i,j) ≥ F (j,i), 1 ≤ i ≤ N,1 ≤ j ≤ N,i < j.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;
        cout<<"Enter the length : ";
        cin>>length;

        int arr[length],brr[length];
        for(int i = 0;i < length;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        cout<<endl;
        for(int i = 0;i < length;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th position : ";
            cin>>brr[i];
        }

        sort(arr,arr + length,greater<int>());
        sort(brr,brr + length);

        cout<<endl;
        cout<<"After sorting first array : ";
        for(int i = 0;i < length;i++) cout<<arr[i]<<" ";

        cout<<endl;
        cout<<"After sorting second array : ";
        for(int i = 0;i < length;i++) cout<<brr[i]<<" ";
    }
}