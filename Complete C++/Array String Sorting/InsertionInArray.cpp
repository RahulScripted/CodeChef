// Insertion in an array





#include <iostream>
using namespace std;

int main() {
    int arr[100] = {2, 4, 6, 8, 10};
    int size = 5;

    int newPosition = 2;
    int newElement = 7; 

    for (int i = size - 1; i >= newPosition; i--) arr[i + 1] = arr[i];

    arr[newPosition] = newElement;
    size++;
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
}