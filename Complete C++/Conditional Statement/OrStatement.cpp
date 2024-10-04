// '||' can be used to insert the 'or' condition in a C++ code.




#include <iostream>
using namespace std;

int main(){
    int z, x, c;
    cin >> z >> x >> c;

    if(c > x || c > z) cout << "PASS\n";
    else cout << "FAIL\n";

    cin >> z >> x >> c;

    if(c > x || c > z) cout << "PASS\n"; 
    else cout << "FAIL\n";
}