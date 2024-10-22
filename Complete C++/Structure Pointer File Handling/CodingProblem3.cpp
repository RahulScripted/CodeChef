// You run the library at your college. Since you are an avid programmer, you decided to use your recent knowledge of Structures to update the catalog of books present in the library. You have been provided some data about the purchasing sequence of the books and their addition to the library. Note that the same book could have been purchased in different lots





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

        int bookIndex = -1; // Index of the book in the array, -1 if not found
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

    // Output book names and counts
    for (int i = 0; i < numBooks; i++) {
        cout << books[i].name << " " << books[i].totalCount << "\n";
    }

    return 0;
}