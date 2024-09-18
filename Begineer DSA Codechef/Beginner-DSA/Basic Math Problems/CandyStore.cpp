// Chef has started working at the candy store. The store has 100 chocolates in total. Chef’s daily goal is to sell X chocolates. For each chocolate sold, he will get 1 rupee. However, if Chef exceeds his daily goal, he gets 2 rupees per chocolate for each extra chocolate. If Chef sells Y chocolates in a day, find the total amount he made.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int dailyGoal,sellChocolate;
        
        cout<<"Enter the daily goal : ";
        cin>>dailyGoal;

        cout<<"Enter the no. of chocolate Chef sell : ";
        cin>>sellChocolate;

        if(dailyGoal >= sellChocolate) cout<<"The total amount he made will be : "<<(sellChocolate * 1)<<endl;
        else cout<<"The total amount he made will be : "<<(dailyGoal * 1) + ((sellChocolate - dailyGoal) * 2)<<endl;
    }
}