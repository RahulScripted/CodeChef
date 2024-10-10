// You are given the following as a user input. First line contains the integer N. The second line contains N space separated integers. The third line contains an integer X. You need to delete all occurrences of X from the list and output the new list.





#include <iostream>
using namespace std;

int main() {
    int N; 
    cin >> N;

    int A[N];
    for(int i = 0; i < N; i++) cin >> A[i];

    int X;
    cin >> X;

    int B[N];
    int it = 0;

    for(int i = 0; i < N; i++) {
        if(A[i] == X) continue;
        B[it++] = A[i];
    }

    for(int i = 0; i < it; i++) A[i] = B[i];
    for(int i = 0; i < it; i++) cout << A[i] << " ";
}  