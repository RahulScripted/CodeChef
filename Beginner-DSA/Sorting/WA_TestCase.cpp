// Chef has recently introduced a feature, called WA Test Cases, which allows you to see the smallest test case that your WA code has failed in. For example, you can go to any relevant problem in Practice, make a submission which gets a WA verdict, and then click on the "Debug My Code" button to see the test case. Your job now is to find that smallest test case that a particular submission fails on. That problem has N test cases, and you are given the size of each of those test cases as S1,S2,…,SN. You are also given a binary string V, which tells whether the submission has passed a particular test case or not. That is, if the ith bit of V is 1, that means that the submission has passed the i th test case. If it is 0, then it has failed that test case. Your job is the output the size of the smallest test case where the submission has failed.


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

        int arr[length];
        for(int i = 0;i < length;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        string str;
        cout<<"Enter the string : ";
        cin>>str;

        int smallest = INT_MAX;
        for(int i = 0;i < length;i++){
            if(arr[i] < smallest && str[i] == '0') smallest = arr[i];
        }
        
        cout<<"The output the size of the smallest test case where the submission has failed will be : "<<smallest<<endl;
    }
}