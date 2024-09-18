// A post on facebook is said to be more popular if the number of likes on the post is strictly greater than the number of likes on some other post. In case the number of likes is same, the post having more comments is more popular. Given arrays A and B, each having size N, such that the number of likes and comments on the ith post are Ai and Bi respectively, find out which post is most popular.


#include <bits/stdc++.h>
using namespace std;
int main() {
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

        int maxLike = 0;
        for(int i = 1;i < length;i++){
            if(arr[i] > arr[maxLike] || (arr[i] == arr[maxLike] && brr[i] > brr[maxLike])) maxLike = i;
        }
        cout<<(maxLike + 1)<<"th post is most popular"<<endl;
    }
}