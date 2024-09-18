// Write a program which does the following

// 1.  Find out if the age is greater than OR equal to the voting age limit, which is set to 18.

// 2.  Declare the variables age and voting_age - and initialise voting_age to 18 and take an integer input and store it in age.

// 3.  Compare age and voting_age using the syntax given above and output the following - "Old enough to vote!" if age is greater than or equal to voting_age or "Not old enough to vote." if age is lesser than voting_age.





#include <bits/stdc++.h>
using namespace std;

int main() {

    int age;
    cin >> age;
    int voting_age = 18;
    
    if (age >= voting_age) cout << "Old enough to vote!";
    else cout << "Not old enough to vote.";
}