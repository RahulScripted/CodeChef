// Write a program to accept as input the length and all the elements of an array. You need to output the difference between the sum of all the even index elements and the sum of the odd index elements.


#include <iostream>
using namespace std;
int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0;i < size;i++){
        // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0;i < size;i++){
        if(i % 2 == 0) sum += arr[i];
        else sum -= arr[i];
    }
    // cout<<"Difference will be : ";
    cout<<sum<<endl;
}
