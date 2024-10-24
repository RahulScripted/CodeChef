// You are the lead analyst at an FMCG company. We are given the following information about T purchase orders (There can be a maximum of 100 purchase orders)

// 1.  Purchase order number

// 2.  Total products in the purchase order

// 3.  There can be multiple products in each purchase order. For each product in the purchase order - you have the info

// 4.  Product name

// 5.  Purchase quantity

// 6.  Purchase cost

// You need to use your knowledge about nested structures and output the following -

// 1.  Purchase order number
// 2.  Total quantity for given purchase order
// 3.  Total cost for given purchase order






// Solution as follows

#include <iostream>
using namespace std;

struct Product {
    string name;
    int quantity;
    float cost;
};

struct PurchaseOrder {
    int orderNumber;
    int numProducts;
    Product products[10]; // Assuming each order has at most 10 products
};

int main() {
    int T;
    cin >> T;
    PurchaseOrder orders[100];

    for (int i = 0; i < T; i++) {
        cin >> orders[i].orderNumber;
        cin >> orders[i].numProducts;

        for (int j = 0; j < orders[i].numProducts; j++) {
            cin >> orders[i].products[j].name;
            cin >> orders[i].products[j].quantity;
            cin >> orders[i].products[j].cost;
        }
    }

    for (int i = 0; i < T; i++) {
        int totalQuantity = 0;
        float totalCost = 0.0;

        for (int j = 0; j < orders[i].numProducts; j++) {
            totalQuantity += orders[i].products[j].quantity;
            totalCost += orders[i].products[j].quantity * orders[i].products[j].cost;
        }

        cout << orders[i].orderNumber << " " << totalQuantity << " " << totalCost << "\n";
    }

    return 0;
}