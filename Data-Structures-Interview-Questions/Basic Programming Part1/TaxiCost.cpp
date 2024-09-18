// If you travel to work by taxi, it costs you X dollars. If you travel by foot it is, of course, free of charge. You want to minimize the cost of travel, but you don’t want to walk when it’s raining or it has rained the day before. Given the weather forecast for the next N days (1 if the rain is falling, 0 otherwise), calculate the cost of travel.



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int size,fare;
        cin>>size>>fare;
        
        long long cost = 0;
        bool prevDay = false;
        for(int i = 0;i < size;i++){
            bool forecast;
            cin>>forecast;
            
            if(forecast){
                cost += fare;
                prevDay = true;
            }
            else if(prevDay) {
                cost += fare;
                prevDay = false;
            }
        }
        cout<<cost<<endl;
    }
}