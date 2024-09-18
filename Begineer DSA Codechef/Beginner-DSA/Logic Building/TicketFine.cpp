// On a certain train, Chef-the ticket collector, collects a fine of Rs. X if a passenger is traveling without a ticket. It is known that a passenger carries either a single ticket or no ticket. P passengers are traveling and they have a total of Q tickets. Help Chef calculate the total fine collected.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,q,p;
        cin>>x>>q>>p;
        cout<<x * abs(p - q)<<endl;
    }
}