// You are given the following as a user input. First line contains the integer N. The second line contains N space separated integers. The third line contains and integer X. You need to insert X as the 1st and last element and output the list. Your list will now have N + 2 elements.





#include <iostream>
using namespace std;

int main() {
    int N; 
    cin >> N;

    int A[N + 2];
    for(int i = 0; i < N; i++) cin >> A[i];

    int X; 
    cin >> X;
    for(int i = N; i >= 1; i--) A[i] = A[i - 1];

    A[0] = X;
    A[N + 1] = X;
    for(int i = 0; i < N + 2; i++) cout << A[i] << " ";
}   