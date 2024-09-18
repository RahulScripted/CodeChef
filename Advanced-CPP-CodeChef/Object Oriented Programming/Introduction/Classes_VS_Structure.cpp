// Classes Vs Structures




#include <iostream>

using namespace std;

struct Product {
    string name;
    int price;
};


class Person {
    public: string name;
    int age;
};

int main() {
    Product obj1;
    Person obj2;

    return 0;
}