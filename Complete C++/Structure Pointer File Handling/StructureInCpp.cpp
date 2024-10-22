// Structures in Cpp




#include <iostream>
using namespace std;

struct Book {
    string name;
    int price;
};  

int main() {
    Book b1;
    b1.name = "Introduction to DSA";
    b1.price = 10;

    Book b2;
    b2.name = "Introduction to WebD";
    b2.price = 20;

    cout << b1.name << " sells for " << b1.price << "\n";
    cout << b2.name << " sells for " << b2.price << "\n";

    return 0;
}