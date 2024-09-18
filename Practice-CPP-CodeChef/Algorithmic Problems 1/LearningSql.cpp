// Chef has recently started learning from the new CodeChef SQL course. He has a table which initially has R rows and C columns. He then adds E extra rows to it. How many total cells does he have finally?


#include <bits/stdc++.h>
using namespace std;
int main() {
    int rows,cols,extra;
    cout<<"Enter the no. of rows : ";
    cin>>rows;

    cout<<"Enter the no. of cols : ";
    cin>>cols;

    cout<<"Enter the no. of extra rows added : ";
    cin>>extra;

    int change = (rows + extra) * cols;

    cout/* <<"Finally the no. of cells he have : " */<<change;
}


// Output: 5
//         2
//         1
//         12