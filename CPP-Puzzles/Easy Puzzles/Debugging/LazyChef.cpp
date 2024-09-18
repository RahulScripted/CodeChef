// Chef is a very lazy person. Whatever work is supposed to be finished in x units of time, he finishes it in m * x units of time. But there is always a limit to laziness, so he delays the work by at max d units of time. Given x,m,d, find the maximum time taken by Chef to complete the work.




#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, a, b;
        cin >> x >> a >> b;
            
        cout<<min((x * a),(x + b))<<endl;
    }
}