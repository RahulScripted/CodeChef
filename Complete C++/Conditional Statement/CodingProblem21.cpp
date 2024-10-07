// There are 2 stores in Chefland and both sell the same product. The first store sells the product for 100 rupees whereas the second store sells it for 200 rupees. It is the holiday season and both stores have announced a special discount. The first store is providing a discount of A percent on its product and the second store is providing a discount of B percent on its product. Chef is wondering which store is selling the product at a cheaper price after the discount has been applied. Can you help him identify the better deal?





#include<iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    int First = 100;
    int Second = 200;

    while(t--) {
        int A, B;
        cin >> A >> B;

        int price_A = First - First * A / 100;
        int price_B = Second - Second * B / 100;

        if(price_A < price_B) cout << "FIRST\n";
        else if(price_B < price_A) cout << "SECOND\n";
        else cout << "BOTH\n";
    }
}