// Input an integer N and flip the most significant and least significant bit & Print the number.



#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    
    num = num ^ 1; // flipping the least significant bit

    // finding the position of most significant bit 
    int pos = 0;
    int n1 = num;
    while(n1!=0){
        n1 /=2;
        pos++;
    }
    pos--;
    
    num = num ^ (1 << pos); // flipping the most significant bit
    cout<<num<<endl;
}