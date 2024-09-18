// Our Chef has some students in his coding class who are practicing problems. Given the difficulty of the problems that the students have solved in order, help the Chef identify if they are solving them in non-decreasing order of difficulty. Non-decreasing means that the values in an array is either increasing or remaining the same, but not decreasing. That is, the students should not solve a problem with difficulty d1, and then later a problem with difficulty d2, where d1 > d2. Output “Yes” if the problems are attempted in non-decreasing order of difficulty rating and “No” if not.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length;
        cout<<"Enter the length of an array : ";
        cin>>length;

        int arr[length];
        for(int i = 0;i < length;i++){
            cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        bool flag = true;
        for(int i = 1;i < length;i++){
            if(arr[i] < arr[i - 1]){
                flag = false;
                break;
            }
        }

        if(flag == false) cout<<"The problems are not attempted in non-decreasing order of difficulty rating"<<endl;

        else cout<<"The problems are attempted in non-decreasing order of difficulty rating"<<endl;
    }
}