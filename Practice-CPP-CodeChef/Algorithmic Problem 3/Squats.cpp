// Somu went to the gym today. He decided to do X sets of squats. Each set consists of 15 squats. Determine the total number of squats that he did today.


#include <iostream>
using namespace std;

int main() {
	int testCase;
    cin>>testCase;
    while(testCase--){
	    int setOfSquats;
        // cout<<"Enter the no. of squats : ";
	    cin>>setOfSquats;

        // cout<<"The total number of squats that he did today will be : ";
	    cout<<(15 * setOfSquats)<<endl;
	}
}



// Output: 3              |
//         1              |     15
//         4              |     60
//         99             |     1485