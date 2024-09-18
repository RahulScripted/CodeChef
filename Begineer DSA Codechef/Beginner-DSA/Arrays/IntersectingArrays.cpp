// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and return the result in sorted order. Intersection is defined as the common element in both arrays



#include<bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    
    vector<int>result;
    int i = 0,j = 0;
    while(i < n1 && j < n2){
        if(nums1[i] < nums2[j]) i++; 
        if(nums1[i] > nums2[j]) j++; 
        else if(nums1[i] == nums2[j]){
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return result;
}

int main() {
    int nums1Size;
    // cout<<"Enter the size of the first array : ";
    cin >> nums1Size;
    // cout<<"Enter the size of the second array : ";
    int nums2Size;
    cin >> nums2Size;
    vector < int > nums1(nums1Size);
    vector < int > nums2(nums2Size);
    for (int i = 0; i < nums1Size; i++) {
        // cout<<"Enter the value at "<<(i + 1)<<"th position for first array : ";
        cin >> nums1[i];
    }
    for (int i = 0; i < nums2Size; i++) {
        // cout<<"Enter the value at "<<(i + 1)<<"th position for second array : ";
        cin >> nums2[i];
    }
    vector < int > ans = intersect(nums1, nums2);
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
}