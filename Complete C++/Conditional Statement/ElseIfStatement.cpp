// Write a program which does the following

// 1.  Create integer variables b and r - the marks scored by Bob and Rob. Initialise b and r as b = 23 and r = 45.

// 2.  Compute and output the following to the console "Rob Scored higher marks than Bob." if r is greater than b. "Bob & Rob both scored the same" if both b and r are equal.

// 3.  Update the values of b and r as b = 15 and r = 15. Compute and output the following to the console "Rob Scored higher marks than Bob." if r is greater than b "Bob & Rob both scored the same" if both b and r are equal.




#include <iostream>
using namespace std;

int main(){
    int b, r;
    b = 23;
    r = 45;

    if(r > b) cout << "Rob Scored higher marks than Bob."<<endl;
    else if(b == r) cout << "Bob & Rob both scored the same"<<endl;

    b = 15;
    r = 15;
    
    if(r > b) cout << "Rob Scored higher marks than Bob."<<endl;
    else if(r == b) cout << "Bob & Rob both scored the same"<<endl;
}