// Chef is teaching his class of N students at Hogwarts. He groups students with the same height together for an activity. Some of the students end up in a groups with only themselves and are saddened by this. With the help of his magic wand, Chef can increase the height of any student to any value he likes. Now Chef wonders, what is the minimum number of students whose height needs to be increased so that there are no sad students?




#include <bits/stdc++.h>
using namespace std;
int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;

        vector<int>arr(n);
        map<int,int>mp;
        int maxHeight = 0;

        for(int i = 0;i < n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
            if(arr[i] > maxHeight) maxHeight = arr[i];
        }

        int lonely = 0;
        int groupOfTwo = 0;
        bool flag = false;

        for(const auto& i : mp){
            if(i.second == 1){
                lonely++;
                if(i.first == maxHeight) flag = true;
            }
            else if(i.second > 2) groupOfTwo = 1;
        }

        if(lonely == 1){
            if(groupOfTwo || !flag) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else cout<<(lonely + 1) / 2<<endl;
    }
}