// Abhi is a salesman. He was given two types of candies, which he is selling in N different cities. For the prices of the candies to be valid, Abhi's boss laid down the following condition: A given type of candy must have distinct prices in all N cities. In his excitement, Abhi wrote down the prices of both the candies on the same page and in random order instead of writing them on different pages. Now he is asking for your help to find out if the prices he wrote are valid or not. You are given an array A of size 2N. Find out whether it is possible to split A into two arrays, each of length N, such that both arrays consist of distinct elements. Both arrays can have distinct elements only if no element in the original array is repeated more than twice.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;
        cout<<"Enter the length of an array : ";
        cin>>length;

        int arr[2 * length];
        for(int i = 0;i < (2 * length);i++){
            cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        sort(arr,arr + (2 * length));
        bool flag = true;
        for(int i = 0;i < (2 * length) - 2;i++){
            if(arr[i] == arr[i + 1] && arr[i] == arr[i + 2]){
                flag = false;
                break;
            }
        }

        if(flag == true) cout<<"It is possible to split"<<endl;
        else cout<<"It is not possible to split"<<endl;
    }
}