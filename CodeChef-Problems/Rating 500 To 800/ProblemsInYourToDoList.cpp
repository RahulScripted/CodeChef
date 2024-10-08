// CodeChef recently revamped its practice page to make it easier for users to identify the next problems they should solve by introducing some new features:

// 1. Recent Contest Problems - contains only problems from the last 2 contests
// 2. Separate Un-Attempted, Attempted, and All tabs
// 3. Problem Difficulty Rating - the Recommended dropdown menu has various difficulty ranges so that you can attempt the problems most suited to your experience
// 4. Popular Topics and Tags

// Like most users, Chef didn't know that he could add problems to a personal to-do list by clicking on the magic '+' symbol on the top-right of each problem page. But once he found out about it, he went crazy and added loads of problems to his to-do list without looking at their difficulty rating.

// Chef is a beginner and should ideally try and solve only problems with difficulty rating strictly less than 1000. Given a list of difficulty ratings for problems in the Chef's to-do list, please help him identify how many of those problems Chef should remove from his to-do list, so that he is only left with problems of difficulty rating less than 1000.

#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        int noOfQuestion;
        cout<<"Enter no. of question : ";
        cin>>noOfQuestion;
        int ans = 0;
        while(noOfQuestion--){
            int difficultyLevel;
            cout<<"Enter difficulty level of the problem : ";
            cin>>difficultyLevel;
            if(difficultyLevel >= 1000) ans += 1;
        }
        cout<<"No. of problems can't be solved : "<<ans<<endl;
    }
}