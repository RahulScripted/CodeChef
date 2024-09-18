// Double the Value



#include <iostream>
using namespace std;


void doubleValue(int* p) {
    *p *= 2;
}

int main() {
    int x;
    cin >> x;
    
    int* ptr = &x;
    doubleValue(ptr);
    cout << x << endl;
}
