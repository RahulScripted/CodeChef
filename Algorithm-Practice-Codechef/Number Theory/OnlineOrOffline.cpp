// Chef is confused whether to go out and eat at the restaurant or order food online. The online order costs N rupees while the cost of eating at the restaurant is M rupees. However, Chef has a discount coupon with which he can avail flat 10% off on his online order. Find the cheaper option for Chef to eat, i.e., whether to order food online or eat at the restaurant.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int online,restaurant;
        cout<<"Enter the bill in online mode : ";
        cin>>online;

        cout<<"Enter the bill in offline mode : ";
        cin>>restaurant;

        if((online - (online / 10.0)) < restaurant) cout<<"Order food : Online"<<endl;

        else if((online - (online / 10.0)) == restaurant) cout<<"Order food : Either"<<endl;

        else cout<<"Order food : Dining"<<endl;
    }
}