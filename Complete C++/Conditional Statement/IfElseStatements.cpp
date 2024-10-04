// Compare age and vage using the syntax given above and output the following :

// 1.  "Old enough to vote!" if age is greater than or equal to vage.

// 2.  "Not old enough to vote." if age is lesser than  vage





#include<bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

int main(){
    
    int Age = 25;
    int Vage = 18;

    if(Age >= Vage) cout << "Old enough to vote!";
    else cout << "Not old enough to vote.";
}