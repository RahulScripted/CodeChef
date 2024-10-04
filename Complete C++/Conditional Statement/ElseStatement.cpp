// Write a program which does the following

// 1.  Create integer variables r and k - the weight of friends Ram and Karan. Initialise r and k as r = 24 and k = 32.

// 2.  Compute and output the following to the console "Ram is heavier than Karan." if r is greater than k "Karan is heavier than Ram" if r is lesser than k. "Ram & Karan have the same weight!" for any remaining conditions.

// 3.  Update the values of r and k as r = 78 and k = 78. Compute and output the following to the console "Ram is heavier than Karan." if r is greater than k "Karan is heavier than Ram" if r is lesser than k. "Ram & Karan have the same weight!" for any remaining conditions.





#include <iostream>
using namespace std;

int main(){
        
    // Replace _ with the correct code
    
    int r, k;
    r = 24;
    k = 32; 

    if(r > k) cout << "Ram is heavier than Karan.\n";
    else if(r < k) cout << "Karan is heavier than Ram\n";
    else cout << "Ram & Karan have the same weight!\n";

    r = 78;
    k = 78; 

    if(r > k) cout << "Ram is heavier than Karan.\n";
    else if(r < k) cout << "Karan is heavier than Ram\n";
    else cout << "Ram & Karan have the same weight!\n";
}