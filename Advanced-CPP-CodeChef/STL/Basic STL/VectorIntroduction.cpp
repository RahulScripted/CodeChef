// Given N integers, write a program to print middle element if the N odd and is multiple of 3. first and last element(space separated) if N is even and is multiple of 3. else sum of first and last element.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        
        vector<int>arr;
        for(int i = 0;i < size;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        
        if(size % 2 != 0 && size % 3 == 0) cout<<arr[size / 2]<<endl;

        else if(size % 2 == 0 && size % 3 == 0) cout<<arr[0]<<" "<<arr[size - 1]<<endl;
        
        else cout<<(arr[0] + arr[size - 1])<<endl;
    }
}