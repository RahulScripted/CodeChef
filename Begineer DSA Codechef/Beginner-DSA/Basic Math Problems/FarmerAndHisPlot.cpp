// Santosh has a farm at Byteland. He has a very big family to look after. His life takes a sudden turn and he runs into a financial crisis. After giving all the money he has in his hand, he decides to sell his plots. The specialty of his land is that it is rectangular in nature. Santosh comes to know that he will get more money if he sells square shaped plots. So keeping this in mind, he decides to divide his land into minimum possible number of square plots, such that each plot has the same area, and the plots divide the land perfectly. He does this in order to get the maximum profit out of this. So your task is to find the minimum number of square plots with the same area, that can be formed out of the rectangular land, such that they divide it perfectly.


#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int valueOfM,valueOfN;

        cout<<"Enter the value of M : ";
        cin>>valueOfM;

        cout<<"Enter the value of N : ";
        cin>>valueOfN;

        int gcd = 1;
        for(int i = 2; i <= min(valueOfM,valueOfN);i++){
            if((valueOfM % i == 0) && (valueOfN % i == 0)) gcd = i;
        }

        cout<<"The minimum number of square plots will be : "<<(valueOfM * valueOfN) / (gcd * gcd)<<endl;
    }
}