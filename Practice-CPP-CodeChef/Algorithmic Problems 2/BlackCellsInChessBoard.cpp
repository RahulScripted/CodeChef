// Given n (n is even), determine the number of black cells in an n * n chessboard.


#include <iostream>
using namespace std;
int main() {
    int n;
    // cout<<"Enter the no. of cells : ";
    cin>>n;
	cout/* <<"No. of black cells are : " */<<(n * n) / 2<<endl;
	return 0;
}


// Output: 8
//         32