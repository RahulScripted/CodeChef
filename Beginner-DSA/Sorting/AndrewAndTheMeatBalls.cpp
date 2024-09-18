// He has N plates of meatballs, here the ith plate contains Pi meatballs. You need to find the minimal number of plates Andrew needs to take to his trip to Las Vegas, if he wants to eat there at least M meatballs. Note that each plate is already packed, i.e. he cannot change the amount of meatballs on any plate.


#include <bits/stdc++.h>
using namespace std;
int main(){
    long long length,meatBalls;
    cout<<"Enter the length : ";
    cin>>length;

    cout<<"Enter the no. of meatBalls : ";
    cin>>meatBalls;

    long long arr[length];
    for(long long i = 0;i < length;i++){
        cout<<"Enter the value of "<<(i + 1)<<"th position : ";
        cin>>arr[i];
    }

    sort(arr,arr + length);
    int count = 0;
    long long sum = 0;

    for(long long i = (length - 1);i >= 0;i--){
        sum += arr[i];
        count++;
        if(sum >= meatBalls) break;
    }

    cout<<"The minimal number of plates Andrew needs to take to his trip to Las Vegas will be : "<<count<<endl;
}