// Given a list of N integers, representing height of mountains. Find the height of the tallest mountain.


#include <iostream>
#include <climits>
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

        int maximum = INT_MIN;
        for(int i = 0;i < length;i++){
            if(arr[i] > maximum) maximum = arr[i];
        }

        cout<<"The height of the tallest mountain will be : "<<maximum<<endl; 
    }
}