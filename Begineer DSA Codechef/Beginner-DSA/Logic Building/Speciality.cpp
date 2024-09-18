// Given the number of problems in each of these 3 categories as X,Y, and Z respectively (where all three integers are distinct), find if the user has been most active as a Setter, Tester, or Editorialist.





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        if(a > b && a > c) cout<<"Setter"<<endl;
        
        else if(b > a && b > c) cout<<"Tester"<<endl;
        
        else cout<<"Editorialist"<<endl;
    }
}