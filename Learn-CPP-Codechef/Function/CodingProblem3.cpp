// Chef is taking his baby steps into the world of programming. The very first program he's tasked to write is as follows: "Given two integers A and B, print A + B." Unfortunately, Chef makes a typo: his program outputs A x B instead of A + B. Given the values of A and B, can you help Chef find the absolute difference between the correct answer and the value his program prints?





#include <iostream>
#include <cstdlib> 
using namespace std;

int multiple(int a, int b) {
    return a * b;
}

int total(int x, int y) {
    return x + y;
}

int abs_diff(int a,int b) {
    return abs(a - b);
}

int main() {
    int A, B;
    cin >> A >> B;
    
    int C = multiple(A, B);
    int D = total(A, B);
    int E = abs_diff(C, D);
    
    cout << E << endl;
}