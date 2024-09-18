// The Chef had a box with N numbers arranged inside it: A1, A2, ..., AN. He also had the number N at the front, so that he knows how many numbers are in it. That is, the box actually contains N+1 numbers. But in his excitement due the ongoing IOI, he started dancing with the box in his pocket, and the N+1 numbers got jumbled up. So now, he no longer knows which of the N+1 numbers is N, and which the actual numbers are. He wants to find the largest of the N numbers. Help him find this.



#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    cin.ignore();
    while(testCase--){
        string s;
        getline(cin,s);
        stringstream ss(s);

        vector<int>num;
        int i;
        while(ss >> i) num.push_back(i);

        int original = num.size() - 1;

        auto it = find(num.begin(),num.end(),original);
        if(it != num.end()) num.erase(it);

        int maxEle = *max_element(num.begin(),num.end());

        cout<<maxEle<<endl;
    }
}