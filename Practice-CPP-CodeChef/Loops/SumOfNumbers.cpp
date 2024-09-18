// Write a program using a for loop to calculate the sum of the first N natural numbers.


#include <iostream>
using namespace std;
int main() {   
    int num;
    // cout<<"Enter the number : ";
	cin>>num;
    int sum = 0;
    for(int i = 1;i <= num;i++) sum += i;
    // cout<<"Sum will be : ";
    cout<<sum<<endl;
}


// Output: 10
//         55