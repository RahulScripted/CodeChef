// Chef is confused by all the different formats dates can be written in. Here's a simple problem Chef wants you to solve. You are given a date string S. The date follows the Gregorian calendar, the one used in most parts of the world. Identify whether it is of the form DD/MM/YYYY or MM/DD/YYYY, or if it can be of both forms. Here DD denotes the 2-digit day, MM denotes the 2-digit month and YYYY denotes the 4-digit year. It is guaranteed that S is a valid date taking at least one of these forms.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string date;
        cout<<"Enter the date : ";
        cin>>date;

        int first = date[0] - '0';
        first *= 10;
        first += date[1] - '0';

        int second = date[3] - '0';
        second *= 10;
        second += date[3] - '0';

        if(first > 12) cout<<"The "<<date<<" format is : DD/MM/YYYY"<<endl;
        else if(second > 12) cout<<"The "<<date<<" format is : MM/DD/YYYY"<<endl;
        else cout<<"The "<<date<<" format can be both DD/MM/YYYY or MM/DD/YYYY"<<endl;
    }
}