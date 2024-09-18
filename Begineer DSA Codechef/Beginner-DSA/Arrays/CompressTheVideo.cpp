// Chef recorded a video explaining his favorite recipe. However, the size of the video is too large to upload on the internet. He wants to compress the video so that it has the minimum size possible. Chef's video has N frames initially. The value of the ith frame is Ai. Chef can do the following type of operation any number of times: Choose an index (1 ≤ i ≤ N) such that the value of the ith frame is equal to the value of either of its neighbors and remove the ith frame. Find the minimum number of frames Chef can achieve.


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

        int count = 0;
        for(int i = 1;i < length;i++){
            if(arr[i] == arr[i - 1]) count++;
        }

        if(length == 1) count = 0;
        cout<<"The minimum number of frames Chef can achieve will be : "<<(length - count)<<endl;
    }
}