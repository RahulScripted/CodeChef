// In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of X bits per second above which his calculations are prone to errors. If Chef is currently working at Y bits per second, is he prone to errors? If Chef is prone to errors print YES, otherwise print NO.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    if(x < y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}