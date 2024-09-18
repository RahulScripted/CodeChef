// A particular month has 30 days, numbered from 1 to 30.Day 1 is a Monday, and the usual 7-day week is followed.So day 2 is Tuesday, day 3 is Wednesday, and so on. Every Saturday and Sunday is a holiday. There are N festival days, which are also holidays. Note that it is possible for a festival day to occur on a Saturday or Sunday. You are given the dates of the festivals. Determine the total number of holidays in this month.





#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
	
	while(t--){
	    int N;
	    cin >> N;
	    int A[N];
	    for(int i=0; i < N; i++)  cin >> A[i];
	    
	    set<int>holi;
	    for(int i = 6;i <= 30;i+=7) holi.insert(i); // saturday
	    for(int i = 7;i <= 30;i+=7) holi.insert(i); // sunday
	    for(int i = 0;i<N;i++) holi.insert(A[i]); // Holidays
	    
	    cout<< holi.size()<<endl;
	}
}