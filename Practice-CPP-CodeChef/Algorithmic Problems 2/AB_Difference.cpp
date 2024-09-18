// Chef is taking his baby steps into the world of programming. The very first program he's tasked to write is as follows: "Given two integers A and B, print A+B." Unfortunately, Chef makes a typo: his program outputs A x B instead of A + B. Given the values of A and B, can you help Chef find the absolute difference between the correct answer and the value his program prints?


#include <iostream>
using namespace std;
int main() {
    int valueOfA,valueOfB;

    cout<<"Enter the value of A : ";
    cin>>valueOfA;

    cout<<"Enter the value of B : ";
    cin>>valueOfB;

	int sum = (valueOfA + valueOfB);
	int mul = (valueOfA * valueOfB);

	if(mul >= sum) cout /* <<"Absolute difference will be : " */ <<(mul - sum)<<endl;
	else cout /* <<"Absolute difference will be : " */ <<(sum - mul)<<endl;
}