// You are given the following as a user input. First line contains the integer N and X. The second line contains N space separated integers (List 1). The third line contains X space separated integers (List 2). You need to merge the lists such that your output is a single list - List 1 + List 2 + List 1.





#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int X;
    cin >> X;

    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];

    int B[X];
    for (int i = 0; i < X; i++) cin >> B[i];

    int C[2 * N + X];
    for (int i = 0; i < N; i++) C[i] = A[i];
    for (int i = N; i < N + X; i++) C[i] = B[i - N];

    for (int i = N + X; i < 2 * N + X; i++) C[i] = A[i - N - X];
    for (int i = 0; i < 2 * N + X; i++) cout << C[i] << " ";

    return 0;
}