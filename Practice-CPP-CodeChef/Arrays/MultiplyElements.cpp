// Write a program to declare and accept an array / list of N space separate integers. Calculate the multiplication of the 1st and 3rd elements of the array and output the same to the console.


#include <iostream>
using namespace std;
int main() {
    int N;
    // cout<<"Enter the size of the array : ";
    cin >> N;
    int arr[N];
    for(int i = 0;i < N;i++){
        // cout<<"Enter the value at "<<(i + 1)<<"th position : ";
        cin>>arr[i];
    }
    cout /* <<"The multiplication of the 1st and 3rd elements of the array will be : " */ <<arr[0] * arr[2]<<endl;
}