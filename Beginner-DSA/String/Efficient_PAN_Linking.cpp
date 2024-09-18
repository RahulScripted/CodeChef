// There are 20 officers in Chefland who can link the PAN to Aadhar. N applications were received for linking PAN. However, due to an internal conflict, each officer intends to process exactly the same number of applications. Determine the minimum number of applications that would remain unprocessed.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string noOfApplicants;
        cout<<"Enter the no. of applicants : ";
        cin>>noOfApplicants;

        int n = noOfApplicants.size();
        int num;
        if(n >= 2) cout<<"The minimum number of applications that would remain unprocessed are : "<<((((noOfApplicants[n - 2] - '0') * 10) + (noOfApplicants[n - 1] - '0')) % 20)<<endl;

        else cout<<"The minimum number of applications that would remain unprocessed are : "<<((noOfApplicants[0] - '0') % 20)<<endl;
    }
}