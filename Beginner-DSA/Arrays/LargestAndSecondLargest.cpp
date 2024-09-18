// You are given an array A of N integers. Find the maximum sum of two distinct integers in the array.


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

        int maximum = 0,secondMaximum = 0;
        for(int i = 0;i < length;i++){
            if(arr[i] > maximum){
                secondMaximum = maximum;
                maximum = arr[i];
            }
            else if(arr[i] != maximum && arr[i] > secondMaximum) secondMaximum = arr[i];
        }
        cout<<"The maximum sum will be : "<<(maximum + secondMaximum)<<endl;
    }
}