// Ashu and Arvind participated in a coding contest, as a result of which they received N chocolates. Now they want to divide the chocolates between them equally. Can you help them by deciding if it is possible for them to divide all the N chocolates in such a way that they each get an equal number of chocolates?




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n % 2 == 0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}