// Take two integer inputs in variables value1 and value2. Inside sum_difference function, do the following: Add the values pointed to by value1 and value2, and store the result in the memory location pointed to by value1. Calculate the absolute difference of the value pointed out by value1 and value2 and store the result in the location pointed by value2. Call sum_difference with value1 and value2 (use address-of operator) as arguments. Print the values stored in value1 and then on next line, the value stored in value2 after calling sum_difference function.





#include <bits/stdc++.h>
using namespace std;

void sum_difference(int *value1, int *value2) {
    int temp = *value1 + *value2;
    *value2 = abs(*value2 - *value1);
    *value1 = temp;
}

int main() {
    int value1, value2;
    cin >> value1 >> value2;
    sum_difference(&value1,&value2);
    
    cout << value1 << endl;
    cout << value2 << endl;
    
    return 0;
}