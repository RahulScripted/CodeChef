// You need to read 2 user defined input integers - A and B. Print all numbers from 1 to A and 1 to B on separate lines using user defined inputs.




#include <iostream>
using namespace std;

void list_generator(int limit) {
    for(int i = 1; i <= limit; i++) cout << i << " ";
    cout << "\n";
}

int main() {
    int A, B;
    cin >> A >> B;

    list_generator(A);
    list_generator(B);
}