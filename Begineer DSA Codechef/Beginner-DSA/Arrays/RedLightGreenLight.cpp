// Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot. Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. Gi-Hun and Ali both have the same height, K. Many players saw this trick and also started hiding behind Ali. Now, there are N players standing between Gi-Hun and Ali in a straight line, with the ith player having height Hi. Gi-Hun wants to know the minimum number of players who need to get shot so that Ali is visible in his line of sight.


#include <iostream>
#include <climits>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfPlayerBetweenThem,heightOfGiHun;
        cout<<"Enter the no. of player between them : ";
        cin>>noOfPlayerBetweenThem;

        cout<<"Enter the height of Gi-Hun : ";
        cin>>heightOfGiHun;

        int arr[noOfPlayerBetweenThem];
        int count = 0;
        for(int i = 0;i < noOfPlayerBetweenThem;i++){
            cout<<"Enter the value for "<<(i + 1)<<"th position : ";
            cin>>arr[i];
            if(arr[i] > heightOfGiHun) count++;
        }

        cout<<"The minimum number of players who need to get shot will be : "<<count<<endl;
    }
}