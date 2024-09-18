// An array is said to be good if all the elements of the array have the same parity. Given an array A of size N. You can perform the following operation on the array: 

// 1.  Choose indices i and j (1 ≤ i,j ≤ |A|,i !=j).

// 2.  Append Ai + Aj to the array A.

// 3.  Remove the ith and jth elements from the array A.

// Find the minimum number of operations required to make the array good. It is guaranteed that the array can be converted to a good array using a finite number of operations.




#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,even=0,odd=0; 
        cin >> n;
        
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        
        for(int i=0;i<n;i++){
            if(arr[i] % 2  == 0) even++;
            else odd++;
        }
        
        int ans=0;
        if(odd%2==1) cout << even << endl;
        else cout << min(even,odd/2) << endl;
    }
}