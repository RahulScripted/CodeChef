// Chef decided to go on a diet during the following N days (numbered 1 through N). Part of the diet plan is to eat K grams of protein during each day. For each valid i, Chef wants to buy Ai grams of protein in the morning of the i-th day and then eat K grams of protein as part of his dinner. If he has any protein remaining, he can store it and use it in later dinners. Initially, Chef is storing 0 grams of protein. Determine whether Chef will have enough protein all the time during his diet. In case he will not have enough, find the first day on which Chef will be unable to eat K grams of protein.




#include <iostream>
using namespace std;

int main() {
	int testcase;
    cin>>testcase;
	while(testcase--){
	    int num,num1;
        cin>>num>>num1;
	    
        int arr[num];
	    for(int i=0;i<num;i++) cin>>arr[i];
	    
        int left=0;
	    bool flag=0;
	    for(int i=0;i<num;i++){
	        if (left+arr[i]<num1){
	            cout<<"NO"<<" "<<i+1<<endl;
	            flag=1;
	            break;
	        }
	        left=left+arr[i]-num1;
	    }
	    if (flag==0) cout<<"YES"<<endl;
	}
}