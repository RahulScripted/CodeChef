// There is a bus with 30 seats. The seats are numbered from 1 to 30, and the numbering is as depicted in this image. As can be seen in the image, the bus is divided into two decks - The Lower deck, and the Upper deck, with 15 seats each. And some of the seats come as Single and some as Double. For example, Seats 1 and 2 are Double, whereas Seat 11 is a Single. You will be given a Seat number, and your job is to classify it as one of these 4 types: Lower Single, Lower Double, Upper Single & Upper Double.





#include<iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--) {
        int x; 
        cin >> x;
        if(x > 15) {
            cout << "Upper ";
            x -= 15;
        }
        else cout << "Lower ";

        if(x <= 10) cout << "Double\n";
        else cout << "Single\n";
    }

    return 0;
}