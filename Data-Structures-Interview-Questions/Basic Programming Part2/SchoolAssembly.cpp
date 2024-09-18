// During the assembly, a teacher lines up N students in a line in front of her. She can see the first student and all the students taller than the students before them ( i.e a teacher can see the student i if hi < hj for all j ≤ i ). How many students will the teacher be able to see?




#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    vector<int>v(n);
    for(int i = 0;i < n;i++) cin>>v[i];
    
    long long count = 1;
    int maxi = v[0];
    for(int i = 1;i < n;i++){
        if(maxi < v[i]) count++;
        maxi = max(maxi,v[i]);
    }
    cout<<count<<endl;
}