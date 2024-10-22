// Coding Library Struct




#include <iostream>
using namespace std;

struct Book {
    string name;
    int totalCount;
};

int main() {
    int T;
    cin >> T;

    Book books[T];
    int numBooks = 0; // Number of unique books in the array

    for (int i = 0; i < T; i++) {
        string bookName;
        cin >> bookName;

        int bookIndex = -1;
        for (int j = 0; j < numBooks; j++) {
            if (bookName == books[j].name) {
                bookIndex = j;
                break;
            }
        }

        if (bookIndex == -1) {
            books[numBooks].name = bookName;
            int numOrders, totalQuantity = 0;
            cin >> numOrders;
            int quantity;
            cin >> quantity;
            totalQuantity += quantity;
            books[numBooks].totalCount = totalQuantity;
            numBooks++;
        } 
        else {
            int numOrders, totalQuantity = 0;
            cin >> numOrders;
            int quantity;
            cin >> quantity;
            books[bookIndex].totalCount += quantity;
        }
    }

    for (int i = 0; i < numBooks; i++) cout << books[i].name << " " << books[i].totalCount << "\n";
}