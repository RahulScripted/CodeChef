// Chef is a farmer and a pet lover. He has a lot of his favorite pets cats and dogs in the barn. He knows that there are C cats and D dogs in the barn. Also, one day went to field and found that there were L legs of the animals touching the ground. Chef knows that cats love to ride on the dogs. So, they might ride on the dogs, and their legs won't touch the ground and Chef would miss counting their legs. Chef's dogs are strong enough to ride at max two cats on their back. It was a cold foggy morning, when Chef did this counting. So he is now wondering whether he counted the legs properly or not. Specifically, he is wondering whether it is possible that he counted correctly. Please help Chef in finding it.




#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    // cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        long long cats,dogs,noOfLegs;

        // cout<<"Enter the no. of cats : ";
        cin>>cats;

        // cout<<"Enter the no. of dogs : ";
        cin>>dogs;

        // cout<<"Enter the no. of legs : ";
        cin>>noOfLegs;

        if(noOfLegs % 4 != 0) cout<<"no"<<endl;
        else{
            long long min,max;
            if((dogs * 2) > cats){
                min = (dogs * 4);
                max = (dogs * 4) + (cats * 4);
            }
            else{
                min = (dogs * 4) + abs((dogs * 2) - cats) * 4;
                max = (dogs * 4) + (cats * 4);
            }

            if(noOfLegs >= min && noOfLegs <= max) cout<<"yes"<<endl;

            else cout<<"no"<<endl;
        }
    }
}