// You are given 2 lines of input 1st line contains the integer N 2nd line contains N space separate integers. Implement the Selection sort algorithm




#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) minIndex = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];

    selectionSort(arr, N);
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << "\n";
}