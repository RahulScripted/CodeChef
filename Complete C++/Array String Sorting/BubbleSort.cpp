// You are given 2 lines of input - 1st line contains the integer N. 2nd line contains N space separate integers. Implement the bubble sort algorithm flow described above.





#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for(int i = 0;i < (size - 1);i++){
        for(int j = (i + 1);j < size;j++){
            if(arr[i] >arr[j]) swap(arr[i],arr[j]);
        }
    }
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];

    bubbleSort(arr, N);
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << "\n";
}