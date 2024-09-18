// Chef and Chefina both love chocolates. Chef's parents gave him A chocolates out of a total of N chocolates. The remaining chocolates were given to Chefina. What was the difference between the count of chocolates received by Chef and Chefina?




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int N, A;
        cin >> N >> A;
        
        int chef_chocolates = A;
        int chefina_chocolates = N - A;
        
        int diff = abs(chefina_chocolates - chef_chocolates);
        cout << diff << endl;
    }
    return 0;
}