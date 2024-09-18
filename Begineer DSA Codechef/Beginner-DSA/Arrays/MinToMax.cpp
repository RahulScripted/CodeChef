// You are given an array A of size N. Let M be the minimum value present in the array initially. In one operation, you can choose an element Ai (1 ≤ i ≤ N) and an integer X (1 ≤ X ≤ 100), and set Ai = X. Determine the minimum number of operations required to make M the maximum value in the array A.


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

        int minimumElement = arr[0];
        for(int i = 1;i < length;i++){
            if(arr[i] < minimumElement) minimumElement = arr[i];
        }

        int count = 0;
        for(int i = 0;i < length;i++){
            if(minimumElement == arr[i]) count++;
        }

        cout<<"The minimum number of operations will be required : "<<(length - count)<<endl;
    }
}