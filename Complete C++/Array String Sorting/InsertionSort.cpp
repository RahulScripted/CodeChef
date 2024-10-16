// You are given 2 lines of input. 1st line contains the integer N. 2nd line contains N space separate integers. Implement the insertion sort algorithm





#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];

    insertionSort(arr, N);
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << "\n";
}