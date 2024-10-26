// Sergey has made N measurements. Now, he wants to know the average value of the measurements made. In order to make the average value a better representative of the measurements, before calculating the average, he wants first to remove the highest K and the lowest K measurements. After that, he will calculate the average value among the remaining N - 2K measurements. Could you help Sergey to find the average value he will get after these manipulations?






#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        sort(arr, arr + n);
        double sum = 0;
        for(int i = k; i < (n-k); i++) sum+=arr[i];

        double l = n - 2*k;
        double avg = sum/l;
        cout << fixed << setprecision(6) << avg << "\n";
    }
    return 0;
}