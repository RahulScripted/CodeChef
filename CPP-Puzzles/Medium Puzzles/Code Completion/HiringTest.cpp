// A company conducted a coding test to hire candidates. N candidates appeared for the test, and each of them faced M problems. Each problem was either unsolved by a candidate (denoted by 'U'), solved partially (denoted by 'P'), or solved completely (denoted by 'F'). To pass the test, each candidate needs to either solve X or more problems completely, or solve (X - 1) problems completely, and Y or more problems partially. Given the above specifications as input, print a line containing N integers. The ith integer should be 1 if the ith candidate has passed the test, else it should be 0.




#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n,m;
	    cin >> n>>m;
	    int x,y;
	    cin>>x>>y;
	    
	    string ans = "";
	    while(n--){
	        int countF = 0,countP = 0;
	        string s;
	        cin>>s;
	        for(int i = 0;i < m;i++){
	            if(s[i] == 'F') countF++;
	            else if(s[i] == 'P') countP++;
	        }
	        if(countF >= x) ans += "1";
	        else if(countF >= (x - 1) && countP >= y) ans += "1";
	        else ans += "0";
	    }
	    cout<<ans<<endl;
	}
}