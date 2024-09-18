// Write a program which does the following

// 1.  The 3rd month in the given array is incorrect

// 2.  Update the 3rd month in the given array with the correct one - "Mar"

// 3.  Once the 3rd array element is updated, output the 3rd array element to the console





#include <bits/stdc++.h>
using namespace std;

int main() {
    string mnts[4] = {"Jan","Feb"," Dec","Apr"};
    mnts[2] = "Mar";
    cout << mnts[2];
}