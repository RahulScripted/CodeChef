// You are given N strings. Your task is to group the strings that are anagrams of each other. Complete the given function.




#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<string> > groupAnagrams(const vector<string>& strings){
        unordered_map<string, vector<string>> map;
  
        for (auto str : strings) {
            string key = str;
            sort(key.begin(), key.end());  
            map[key].push_back(str);
        }
        
        vector<vector<string>> result;
        
        for(const auto& pair : map) {
            result.push_back(pair.second);
        }
        
        return result; 
    }
};

int main() {
    Solution solution;
    vector<string> strings = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> groupedAnagrams = solution.groupAnagrams(strings);

    // Print the grouped anagrams
    for (const auto& group : groupedAnagrams) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}