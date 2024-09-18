// There are 2 stores in Chefland and both sell the same product. The first store sells the product for 100 rupees whereas the second store sells it for 200 rupees. It is the holiday season and both stores have announced a special discount. The first store is providing a discount of A percent on its product and the second store is providing a discount of B percent on its product. Chef is wondering which store is selling the product at a cheaper price after the discount has been applied. Can you help him identify the better deal?


#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int discountOfFirstShop,discountOfSecondShop;
        cout<<"Enter the discount provided by first shop : ";
        cin>>discountOfFirstShop;

        cout<<"Enter the discount provided by second shop : ";
        cin>>discountOfSecondShop;

        int firstShop = 100 - ((100 * discountOfFirstShop) / 100.0);
        int secondShop = 200 - ((200 * discountOfSecondShop) / 100.0);

        if(firstShop == secondShop) cout<<"Both has  same deal"<<endl;
        else if(firstShop < secondShop) cout<<"First shop has the better deal"<<endl;
        else cout<<"Second shop has the better deal"<<endl;
    }
}