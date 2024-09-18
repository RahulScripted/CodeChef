// Chef started watching a movie that runs for a total of X minutes. Chef has decided to watch the first Y minutes (Y is even) of the movie at twice the usual speed. How long will Chef spend watching the movie in total?




#include <bits/stdc++.h>
using namespace std;

int main(){
    int X, Y;
    cin >> X >> Y;
    
    cout<<X - (Y / 2)<<endl;
    return 0;
}