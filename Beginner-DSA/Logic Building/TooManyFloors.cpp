// Chef and Chefina are residing in a hotel. There are 10 floors in the hotel and each floor consists of 10 rooms. 

// 1.  Floor 1 consists of room numbers 1 to 10. 
// 2.  Floor 2 consists of room numbers 11 to 20.
// 3.  Floor i consists of room numbers 10 ⋅ (i - 1) + 1 to 
// 10 ⋅ i.


// You know that Chef's room number is X while Chefina's Room number is Y. If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int chef,chefina;
        cin>>chef>>chefina;
        
        float floorOfChef = ceil(float(chef) / 10);
        float floorOfChefina = ceil(float(chefina) / 10);
        
        if(floorOfChef >= floorOfChefina) cout<<abs(floorOfChefina - floorOfChef)<<endl;
        else cout<<abs(floorOfChef - floorOfChefina)<<endl;
        
    }
}