// Chef has made a list for his monthly expenses. The list has N expenses with index 1 to N. The money spent on each expense depends upon the monthly income of Chef.

// 1.  Chef spends 50% of his total income on the expense with index 1.

// 2.  The money spent on the ith expense (i > 1) is equal to 50% of the amount remaining, after paying for all expenses with indices less than i.

// Given that Chef earns 2^X rupees in a month, find the amount he saves after paying for all N expenses.





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int earnMoney = pow(2,x);
        if(n == 1) cout<<earnMoney - (earnMoney / 2)<<endl;
        else{
            int moneyLeft = earnMoney;
            while(n != 0){
                moneyLeft = moneyLeft - (moneyLeft / 2);
                n--;
            }
            cout<<moneyLeft<<endl;
        }
    }
}