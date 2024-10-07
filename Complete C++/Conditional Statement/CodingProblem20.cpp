// Election season has started in Chefland and the election commission wants to know the count of eligible voters. There are N people in Chefland where the age of the ith person in Ai. Given that a person needs to be at least X years old to vote, find the number of eligible voters.





#include<iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--) {
        int n, x; 
        cin >> n >> x;

        int count = 0;
        for(int j = 1; j <= n; j++) {
            int age;
            cin >> age;
            if(age >= x) count++;
        }
        cout << count << "\n";
    }
}