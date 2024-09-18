// Pain is the leader of a secret organization whose goal is to destroy the leaf village(Konoha). After successive failures, the leader has himself appeared for the job. Naruto is the head of the village but he is not in a condition to fight so the future of the village depends on the soldiers who have sworn to obey Naruto till death.

// Naruto is a strong leader who loves his villagers more than anything but tactics is not his strong area. He is confused whether they should confront Pain or evacuate the villagers including the soldiers (he loves his villagers more than the village). Since you are his advisor and most trusted friend, Naruto wants you to take the decision.

// Pain has a strength of Z and is confident that he will succeed. Naruto has N soldiers under his command numbered 1 through N. Power of i-th soldier is denoted by Ai. When a soldier attacks pain, his strength gets reduced by the corresponding power of the soldier. However, every action has a reaction so the power of the soldier also gets halved i.e. Ai changes to [Ai / 2]. Each soldier may attack any number of times (including 0). Pain is defeated if his strength is reduced to 0 or less.

// Find the minimum number of times the soldiers need to attack so that the village is saved.




#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>> t;
    while(t--){
        int n, z;
        cin >> n >> z;
        
        multiset<int> m_set;
        for(int i = 1; i <= n;i++) {
            int x;
            cin >> x;
            m_set.insert(x);
        }
        
        int sum=0LL,min_moves=0LL;
        while(m_set.size() && z>0) {
            min_moves++;
            int temp = *m_set.rbegin();
            m_set.erase(--m_set.end());
            z -= temp; 
            temp /= 2;
            if(temp > 0) m_set.insert(temp);
        }
        
        if(z<=0) cout<<min_moves << endl; 
        else cout<<"Evacuate"<<endl;
    }
}