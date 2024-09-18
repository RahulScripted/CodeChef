// CodeChef offers a feature called streak count. A streak is maintained if you solve at least one problem daily. Om and Addy actively maintain their streaks on CodeChef. Over a span of N consecutive days, you have observed the count of problems solved by each of them.Your task is to determine the maximum streak achieved by Om and Addy and find who had the longer maximum streak.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfConsecutiveDays;
        cout<<"Enter the no. of consecutive days : ";
        cin>>noOfConsecutiveDays;

        int addy[noOfConsecutiveDays];
        for(int i = 0;i < noOfConsecutiveDays;i++){
            cout<<"Enter the problem solved in "<<(i + 1)<<"th day by Addy : ";
            cin>>addy[i];
        }

        int om[noOfConsecutiveDays];
        for(int i = 0;i < noOfConsecutiveDays;i++){
            cout<<"Enter the problem solved in "<<(i + 1)<<"th day by Om : ";
            cin>>om[i];
        }

        int countOfAddy = 0,maximumConsecutiveOfAddy = 0;
        for(int i = 0;i < noOfConsecutiveDays;i++){
            if(addy[i] == 0) countOfAddy = 0;
            else countOfAddy++;
            maximumConsecutiveOfAddy = max(maximumConsecutiveOfAddy,countOfAddy);
        }

        int countOfOm = 0,maximumConsecutiveOfOm = 0;
        for(int i = 0;i < noOfConsecutiveDays;i++){
            if(om[i] == 0) countOfOm = 0;
            else countOfOm++;
            maximumConsecutiveOfOm = max(maximumConsecutiveOfOm,countOfOm);
        }

        if(maximumConsecutiveOfAddy == maximumConsecutiveOfOm) cout<<"Addy & Om have same streak"<<endl;

        else if(maximumConsecutiveOfAddy == maximumConsecutiveOfOm) cout<<"Om have largest streak"<<endl;

        else cout<<"Addy have largest streak"<<endl;
    }
}