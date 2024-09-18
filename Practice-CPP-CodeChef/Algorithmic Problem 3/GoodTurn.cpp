// Chef and Chefina are playing with dice. In one turn, both of them roll their dice at once. They consider a turn to be good if the sum of the numbers on their dice is greater than 6. Given that in a particular turn Chef and Chefina got X and Y on their respective dice, find whether the turn was good.


#include <iostream>
using namespace std;
int main() {
    int testCase;
    cin>>testCase;
    while(testCase--){
        int scoreOfChef,scoreOfChefina;
        // cout<<"Enter the score of Chef : ";s
        cin>>scoreOfChef;

        // cout<<"Enter the score of Chefina : ";
        cin>>scoreOfChefina;

        if((scoreOfChef + scoreOfChefina) > 6) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}


// Output: 1
//         3 4
//         Yes