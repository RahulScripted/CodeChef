// Chef Watson uses a social network called ChefBook, which has a new feed consisting of posts by his friends. Each post can be characterized by f - the identifier of the friend who created the post, p - the popularity of the post(which is pre-calculated by ChefBook platform using some machine learning algorithm) and s - the contents of the post which is a string of lower and uppercase English alphabets. Also, Chef has some friends, which he has marked as special. The algorithm used by ChefBook for determining the order of posts in news feed is as follows:

// 1.   Posts of special friends should be shown first, irrespective of popularity. Among all such posts the popular ones should be shown earlier.
// 2.   Among all other posts, popular posts should be shown earlier.

// Given, a list of identifiers of Chef's special friends and a list of posts, you have to implement this algorithm for engineers of ChefBook and output the correct ordering of posts in the new feed.



#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,t,y;
	map<int,int> m1;
	cin>>n>>m;
	string s;
	vector<pair<pair<int,string>,int>> v,p;
	for(int i=0;i<n;i++){
	    cin>>t;
	    m1[t]++;
	}
	for(int i=0;i<m;i++){
	    cin>>t>>y>>s;
	    if(m1[t]) v.push_back({{y,s},t});
	    else p.push_back({{y,s},t});
	}
	sort(v.rbegin(),v.rend());
	sort(p.rbegin(),p.rend());
	for(auto i:v) cout<<i.first.second<<endl;
	for(auto i:p) cout<<i.first.second<<endl;
}