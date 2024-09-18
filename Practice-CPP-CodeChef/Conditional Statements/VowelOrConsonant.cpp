// Write a program that takes a lowercase english alphabet character as input and uses a 'switch' statement to determine if it's a Vowel or Consonant.


#include <iostream>
using namespace std;
int main() {
    char ch;
    // cout<<"Enter a character : ";
    cin >> ch;
    switch(ch) {
        case 'a':
        cout<<"Vowel"<<endl;
        break;
        case 'e':
        cout<<"Vowel"<<endl;
        break;
        case 'i':
        cout<<"Vowel"<<endl;
        break;
        case 'o':
        cout<<"Vowel"<<endl;
        break;
        case 'u':
        cout<<"Vowel"<<endl;
        break;
        default:
        cout<<"Consonant"<<endl;
        break;
    }
}


// Output: a
//         Vowel