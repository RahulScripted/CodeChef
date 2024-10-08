// [Chopsticks (singular: chopstick) are short, frequently tapered sticks used in pairs of equal length, which are used as the traditional eating utensils of China, Japan, Korea and Vietnam. Originated in ancient China, they can also be found in some areas of Tibet and Nepal that are close to Han Chinese populations, as well as areas of Thailand, Laos and Burma which have significant Chinese populations. Chopsticks are most commonly made of wood, bamboo or plastic, but in China, most are made out of bamboo. Chopsticks are held in the dominant hand, between the thumb and fingers, and used to pick up pieces of food.] Actually, the two sticks in a pair of chopsticks need not be of the same length. A pair of sticks can be used to eat as long as the difference in their length is at most D. The Chef has N sticks in which the ith stick is L[i] units long. A stick can't be part of more than one pair of chopsticks. Help the Chef in pairing up the sticks to form the maximum number of usable pairs of chopsticks.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int noOfChopsticks,minimumDifference;
    cout<<"Enter the no. of chocolates : ";
    cin>>noOfChopsticks;

    cout<<"Enter the minimum difference between 2 chopstick's length : ";
    cin>>minimumDifference;

    vector<int>arr(noOfChopsticks);
    for(int i = 0;i < noOfChopsticks;i++){
        cout<<"Enter the length of "<<(i + 1)<<"th chopsticks : ";
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    int count  = 0;
    for(int i = 0;i < (noOfChopsticks - 1);){
        if(arr[i + 1] - arr[i] <= minimumDifference){
            count++;
            i += 2;
        }
        else i++;
    }

    cout<<"Maximum number of usable pairs of chopsticks will be : "<<count<<endl;
}