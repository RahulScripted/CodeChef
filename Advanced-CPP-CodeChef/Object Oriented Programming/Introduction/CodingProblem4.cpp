// You are given a class Product having name and price as attributes. This class also contain display method to print the information of the Product.




#include <iostream>
using namespace std;

struct Product {
    string name;
    int price;

    void display(){
        cout<<"Name - "<<name<<endl;
        cout<<"Price - "<<price<<endl;
    }
};

int main() {
    Product obj;
    cin>>obj.name>>obj.price;
    obj.display();
}