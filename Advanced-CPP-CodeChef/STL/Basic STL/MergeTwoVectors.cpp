// Given two vectors of integers, merge and print them if both are sorted, else print the largest one in reverse order.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int size1,size2;
    cin>>size1>>size2;
    
    vector<int>arr1(size1);
    vector<int>arr2(size2);

    for(int i = 0;i < size1;i++) cin>>arr1[i];
    for(int i = 0;i < size2;i++) cin>>arr2[i];

    if(is_sorted(arr1.begin(),arr1.end()) && is_sorted(arr2.begin(),arr2.end())){

        vector<int>v(size1 + size2);
        merge(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),v.begin());

        for(int i = 0;i < (size1 + size2);i++) cout<<v[i]<<" ";
    }

    else{
        if(size1 > size2){
            reverse(arr1.begin(),arr1.end());
            for(int i = 0;i < size1;i++) cout<<arr1[i]<<" ";
        }
        else{
            reverse(arr2.begin(),arr2.end());
            for(int i = 0;i < size2;i++) cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
}