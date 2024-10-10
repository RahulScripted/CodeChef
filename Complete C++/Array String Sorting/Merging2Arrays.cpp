// Merging 2 arrays





#include <iostream>
using namespace std;

int main() {
    int arr1[100] = {2, 4, 6};
    int size1 = 3;

    int arr2[100] = {8, 10, 12, 14}; 
    int size2 = 4;

    int merged[200];
    int mergedSize = size1 + size2; 
    
    for (int i = 0; i < size1; i++) merged[i] = arr1[i];
    for (int i = 0; i < size2; i++) merged[size1 + i] = arr2[i];
    for (int i = 0; i < mergedSize; i++) cout << merged[i] << " ";
}