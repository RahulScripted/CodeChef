// Complete the function to find the minimum and maximum among three integers using call by reference.




#include <iostream>
using namespace std;

void findMaxMin(int &a, int &b, int &c, int &max, int &min) {
   max = a,min = a;
   if(b > a && b > c) max = b;
   else if(c > a && c > b) max = c;
   
   if(b < a && b < c) min = b;
   else if(c < a && c < b) min = c;
}

int main() {
    int num1, num2, num3;
    int max, min;

    cin >> num1 >> num2 >> num3;
    findMaxMin(num1, num2, num3, max, min);

    cout << min << endl;
    cout << max << endl;
}