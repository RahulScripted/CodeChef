// You are given a list of integers. Your task is to sort the list based on the frequency of each integer in ascending order. If two integers have the same frequency, the one with the smaller value should come first.




#include <bits/stdc++.h>
using namespace std;

void frequency_based_sort(int n, vector < int > & arr) {
    const int max_value = 100;
    int count[max_value + 1] = {0};
    
    for(int num : arr){
        count[num]++;
    }
    
    vector<pair<int,int>>freq_list;
    for (int i = 0; i <= max_value; ++i) {
        if (count[i] > 0) {
            freq_list.push_back({i, count[i]});
        }
    }

    
    sort(freq_list.begin(), freq_list.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        if (a.second == b.second) {
            return a.first < b.first; 
        }
        return a.second < b.second; 
    });

    
    for (auto &p : freq_list) {
        for (int i = 0; i < p.second; ++i) {
            cout << p.first << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector < int > arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    frequency_based_sort(n, arr);

    return 0;
}