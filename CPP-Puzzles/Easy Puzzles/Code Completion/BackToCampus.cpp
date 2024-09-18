// Finally, College has started calling students back to campus. There are so many students and thus due to some safety measures the college can’t call back all the students on the same day. It currently has the capacity of screening K students on a single day. There is a total of N students. What's the minimum number of days required for all the students to be back on the campus?




#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        if(n % k == 0) cout<<(n / k)<<endl;
        else cout<<(n / k) + 1<<endl;
    }
}