// Declare 2 integer variables length and width. Accept 2 user inputs from the console and assign them to length and width. Declare another integer variable area - compute the area of the rectangle and assign it to area. Print area to the console with the same text message as in sample output.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int length, width;
    int area;
    cin >> length;
    cin >> width;
    area = length * width;
    cout << "Area of the rectangle is: " <<area;
}