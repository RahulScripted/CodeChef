// Chef is very fond of horses. He enjoys watching them race. As expected, he has a stable full of horses. He, along with his friends, goes to his stable during the weekends to watch a few of these horses race. Chef wants his friends to enjoy the race and so he wants the race to be close. This can happen only if the horses are comparable on their skill i.e. the difference in their skills is less. There are N horses in the stable. The skill of the horse i is represented by an integer S[i]. The Chef needs to pick 2 horses for the race such that the difference in their skills is minimum. This way, he would be able to host a very interesting race. Your task is to help him do this and report the minimum difference that is possible between 2 horses in the race.





#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        
        int b = 1000000000 + 1;
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(abs(a[i] - a[j]) < b) {
                    b = abs(a[i] - a[j]);
                }
            }
        }
        cout << b << "\n";
    }

    return 0;
}