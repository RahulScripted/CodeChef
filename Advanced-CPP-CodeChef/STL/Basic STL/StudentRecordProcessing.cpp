// You are given a list of student records, where each record consists of the student's name, age, and score in a particular subject. Your task is to process these records and perform some operations based on certain criteria.




#include <bits/stdc++.h>
using namespace std;

tuple < int, double > processStudentRecords(const vector < tuple < string, int, double >> & records) {
    int average_age = 0;
    int n = records.size();
    double max_score = 0.0;
    for (int i = 0; i < n; i++) {
        tuple < string, int, double > t = records[i];
        average_age += get < 1 > (t);
        max_score = max(max_score, get < 2 > (t));
    }
    return make_tuple(average_age / n, max_score);
}

int main() {
    int n;
    cin >> n;
    vector < tuple < string, int, double > > records;
    for (int i = 0; i < n; i++) {
        string name;
        int age;
        double score;
        cin >> name >> age >> score;
        records.push_back(make_tuple(name, age, score));
    }
    tuple < int, double > result = processStudentRecords(records);
    cout << get < 0 > (result) << " " << get < 1 > (result);
    return 0;
}