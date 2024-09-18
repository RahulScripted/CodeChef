// In Chefland, denominations less than rupees 10 have stopped and now rupees 10 is the smallest denomination.Suppose Chef goes to buy some item with cost not a multiple of 10, then, he will be charged the cost that is the nearest multiple of 10. If the cost is equally distant from two nearest multiples of 10, then the cost is rounded up. Chef purchased an item having cost X (X ≤ 100) and gave a bill of rupees 100. How much amount will he get back?


#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int bill;
        cout<<"Enter the bill amount : ";
        cin>>bill;
        cout<<(100 - (((bill + 5) / 10) * 10))<<" amount will he get back"<<endl;
    }
}