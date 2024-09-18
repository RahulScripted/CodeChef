// Given two positive integers a and b, output Yes if they are a Oneful Pair. And No otherwise.



#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	if(a+b+(a*b)==111) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}