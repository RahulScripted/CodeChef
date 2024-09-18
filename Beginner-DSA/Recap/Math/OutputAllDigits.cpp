// You need to create and output to the console all the digits of this integer, each separated by a space.




#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
    cin >> t;
	while(t--){
	    string N;
	    cin >> N;
	    int final_ans[N.length()];
	    
	    for(int i = 0; i < N.length(); i++) final_ans[i] = N[i]-'0';
	    for(int i = 0; i < N.length(); i++) cout << final_ans[i] << " ";
	    cout << endl;
	}
}