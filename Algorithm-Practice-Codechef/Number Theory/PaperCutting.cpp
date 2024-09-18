// Chef has a square-shaped chart paper with the side length equal to N. He wants to cut out K x K squares from this chart paper. Find the maximum number of K x K squares he can cut from the entire chart paper.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int lengthOfPaper,lengthOfSquare;
        cout<<"Enter the length of paper : ";
        cin>>lengthOfPaper;

        cout<<"Enter the length of square : ";
        cin>>lengthOfSquare;

        int canMake = (lengthOfPaper / lengthOfSquare);

        cout<<"The maximum number of "<<lengthOfSquare<<" x "<<lengthOfSquare<<" squares he can cut will be : "<<(canMake * canMake)<<endl;
    }
}