// There are N items in a shop. You know that the price of the i-th item is Ai. Chef wants to buy all the N items. There is also a discount coupon that costs X rupees and reduces the cost of every item by Y rupees. If the price of an item was initially ≤ Y, it becomes free, i.e, costs 0. Determine whether Chef should buy the discount coupon or not. Chef will buy the discount coupon if and only if the total price he pays after buying the discount coupon is strictly less than the price he pays without buying the discount coupon.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int length,costOfCoupon,discountOffer;
        cout<<"Enter the length of an array : ";
        cin>>length;

        cout<<"Enter the cost of coupon : ";
        cin>>costOfCoupon;

        cout<<"Enter the offer done by coupon : ";
        cin>>discountOffer;

        int arr[length];
        for(int i = 0;i < length;i++){
            cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
        }

        int sumWithoutDiscount = 0;
        for(int i = 0;i < length;i++) sumWithoutDiscount += arr[i];

        int sumWithDiscount = 0;
        for(int i = 0;i < length;i++){
            if(arr[i] <= discountOffer) sumWithDiscount += 0;
            else sumWithDiscount += (arr[i] - discountOffer);
        }

        if(sumWithoutDiscount <= (sumWithDiscount + costOfCoupon)) cout<<"He should not buy coupon"<<endl;

        else cout<<"He should buy coupon"<<endl;
    }
}