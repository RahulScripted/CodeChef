// A battle is going to begin in the kingdom of Air-land. There are N soldiers in the kingdom, numbered 1 through N and standing in a circle in such a way that for each valid i, the soldier directly to the right of the i-th soldier is soldier i + 1, and the soldier directly to the right of the N-th soldier is soldier 1.Each soldier holds a sword and a shield. The sword is used to attack other soldiers and the shield is used to defend from attacks. Let's denote the attack value of the i-th soldier's sword by ai and the defense value of the i-th soldier's shield by di. In the battle, each soldier picks one of the soldiers standing to his left and right, and attacks that soldier. The choices of the soldiers are completely independent, so each soldier can be attacked by the soldier to his left, by the soldier to his right (the power of such an attack is the attack value of the attacking soldier's sword), by both of them (then, the power of the resulting attack is the sum of the attack values of these soldiers' swords) or by nobody. A soldier remains alive if the defense value of his shield is strictly greater than the power with which he is attacked. Everyone attacks simultaneously and there is only one round of attacks. Each soldier that remains alive at the end is awarded a laurel. The king of Air-land likes these fights, so the host of the battle promised the king that he can pick one soldier and if the soldier he picks survives the battle, the king receives the shield of that soldier. Chef is the deputy of the king and you want to help him pick a soldier for the king in such a way that the king receives the best shield (with the greatest defense value). However, if Chef picks a soldier and that soldier does not survive, Chef will be thrown in a snake pit. Therefore, it should be guaranteed that the chosen soldier will survive regardless of the decisions of the other soldiers. Can you help Chef make the best choice and tell him the defense value of the shield which the king gets, or decide that he can be thrown in the snake pit no matter which soldier he picks?




#include <bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;

        int attack[n];
        int shield[n];

        for(int i = 0;i < n;i++) cin>>attack[i];
        for(int i = 0;i < n;i++) cin>>shield[i];

        int ans = -1;
        if((attack[1] + attack[n - 1]) < shield[0]) ans = shield[0];

        if((attack[0] + attack[n - 2]) < shield[n - 1]) ans = shield[n - 1];

        for(int i = 1;i < (n - 1);i++){
            if(shield[i] > (attack[i - 1] + attack[i + 1])) ans = shield[n - 1];
        }

        cout<<ans<<endl;
    }
}