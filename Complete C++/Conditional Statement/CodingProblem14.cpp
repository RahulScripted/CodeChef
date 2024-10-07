// Print This

//      1 
//     1 1 
//    1 2 1 
//   1 3 3 1 
//  1 4 6 4 1 
// 1 5 10 10 5 1 





#include<iostream>
using namespace std;

int main(){
    int n = 6;

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i - 1; j++)  cout << " ";
        
        for(int j = 0; j <= i; j++){
            int N = i;
            int R = j;

            int facN = 1, facR = 1, facNR = 1;

            for(int k = 1; k <= N; k++) facN *= k;
            for(int k = 1; k <= R; k++) facR  *= k;
            for(int k = 1; k <= N - R; k++) facNR *= k;
            int result = facN / (facR * facNR);
            cout << result << " ";
        }
        cout << "\n";
    }
}