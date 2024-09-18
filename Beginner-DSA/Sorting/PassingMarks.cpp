// In a class of N students, a class test was held. The ith student scored Ai marks. It is also known that the scores of all students were distinct. A student passes the test if their score is strictly greater than the passing mark. Given that exactly X students pass in the test, find the maximum value of the passing mark of the test.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfStudents,passedStudents;
        cout<<"Enter the no. of students : ";
        cin>>noOfStudents;

        cout<<"Enter the no. of passed students : ";
        cin>>passedStudents;

        int arr[noOfStudents];
        for(int i = 0;i < noOfStudents;i++){
            cout<<"Enter the value of "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        sort(arr,arr + noOfStudents);
        int passingMarks = arr[noOfStudents - passedStudents] - 1;
        cout<<"The maximum value of the passing mark of the test will be : "<<passingMarks<<endl;
    }
}