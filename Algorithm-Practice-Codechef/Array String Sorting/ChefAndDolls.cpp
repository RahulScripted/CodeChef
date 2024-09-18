// Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which the dolls come in pairs. One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!! Help chef find which type of doll is missing..


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test case : ";
    cin >> testCase;
    while (testCase--) {
        int noOfDolls;
        cout<<"Enter the no. of dolls : ";
        cin >> noOfDolls;
        vector<int> arr(noOfDolls);
        for (int i = 0; i < noOfDolls; ++i) {
            cout<<"Enter the type of doll : ";
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        
        int missingDoll = arr[noOfDolls - 1]; // Assume the last doll is the missing one initially
        for (int i = 0; i < (noOfDolls - 1); i += 2) {
            if (arr[i] != arr[i + 1]) {
                missingDoll = arr[i];
                break;
            }
        }
        cout << missingDoll <<"th type of doll is missing" << endl;
    }
    return 0;
}