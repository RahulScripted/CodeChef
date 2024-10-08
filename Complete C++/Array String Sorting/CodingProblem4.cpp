// You have N cars that can seat 5 people each and M cars that can seat 7 people each. Determine the maximum number of people that can travel together in these cars.





#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int small,big;
        cin>>small>>big;
        cout<<(small * 5) + (big * 7)<<endl;
    }
}