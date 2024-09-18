// Write a program that uses a do-while loop to find the factorial of a given number.


#include <iostream>
using namespace std;
int main() {
	int num;
    // cout<<"Enter the number : ";
	cin>>num;
    int i = 2,res = 1;
    do{
        res *= i;
        i++;
    }while(i <= num);
    cout<<res<<endl;
}



// Output: 5
// 120