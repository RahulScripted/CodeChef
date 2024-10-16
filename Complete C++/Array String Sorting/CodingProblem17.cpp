// Given a list of numbers, you have to sort them in non decreasing order.





#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, A[1000001];
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> A[i];
    sort(A + 1,A + N + 1);
    for(int i = 1; i <= N; i++) cout << A[i]<<" ";
    cout<<endl;
}