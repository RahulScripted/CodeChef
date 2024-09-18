// Write a program which does the following

// 1.  Initialise a string variable word and assign the value "Ocygen" to it.

// 2.  You now want to fix the typo in the given string.

// 3.  Use the syntax explained above to replace 'c' with 'x' in the variable word

// 4.  Output the updated word to console




#include <bits/stdc++.h>
using namespace std;

int main() {

  string word = "Ocygen";
  word[ 1 ] = 'x';
  cout << word ;
}
