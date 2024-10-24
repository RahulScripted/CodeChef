// You are the leader of your class. Amongst your multiple tasks, you have to calculate the common birthdays of your classmates. Given N classmates' dates of birth in DD MM YYYY format, calculate the number of pairs of your classmates that share the same birthday.





#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    int n; 
    cin >> n;

    Date d[n];
    for(int i = 0; i < n; i++) {
        cin >> d[i].day >> d[i].month >> d[i].year;
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i - 1; j++) {
            if(d[i].day == d[j].day && d[i].month == d[j].month && d[i].year == d[j].year) {
                ans++;
            }
        }
    }

    cout << ans;
}