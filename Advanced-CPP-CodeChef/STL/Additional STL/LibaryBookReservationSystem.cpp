// You are developing a reservation system for a library that allows students to reserve books. Each student can reserve multiple copies of the same book. Your task is to implement the reservation system which returns the all required book in ascending order of their title.





#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    multiset<string> reserveBooks(const vector<string>& bookTitles, const vector<int>& reservations) {
        multiset<string> result;
        assert(bookTitles.size() == reservations.size());

        for(int i = 0; i < bookTitles.size(); i++) {
            for(int j = 0; j < reservations[i]; j++) {
                result.insert(bookTitles[i]);
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<string> bookTitles = {"BookA", "BookB", "BookC"};
    vector<int> reservations = {3, 1, 2};

    multiset<string> reservedBooks = sol.reserveBooks(bookTitles, reservations);

    for(const string& book : reservedBooks) cout << book << " ";
}