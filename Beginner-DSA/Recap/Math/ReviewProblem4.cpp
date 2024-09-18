// Yesterday, puppy Tuzik learned a magically efficient method to find the sum of the integers from 1 to N. He denotes it as sum(N). But today, as a true explorer, he defined his own new function: sum(D, N). The operation sum applied D times: the first time to N, and each subsequent time to the result of the previous operation. Tuzik wants to calculate some values of the sum(D, N) function. Will you help him with that?





#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int D, N;
        cin >> D >> N;
        
        while(D--) N = (N * (N + 1)) / 2;
        cout<<N<<endl;
    }
}