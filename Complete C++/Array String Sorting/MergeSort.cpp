// Merge sort is a divide-and-conquer sorting algorithm that divides the unsorted list into smaller sub-lists, sorts those sub-lists, and then merges them back together to produce a sorted list.





#include <iostream>
using namespace std;

// Merge two sorted subarrays into a single sorted array
void merge(int arr[], int left, int mid, int right) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    int leftArr[leftSize];
    int rightArr[rightSize];

    for (int i = 0; i < leftSize; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < rightSize; i++) {
        rightArr[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;

    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Merge sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];

    mergeSort(arr, 0, N - 1);
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << "\n";
}