// Little Malvika is very peculiar about colors. On her birthday, her mom wanted to buy balloons for decorating the house. So she asked her about her color preferences. The sophisticated little person that Malvika is, she likes only two colors — amber and brass. Her mom bought n balloons, each of which was either amber or brass in color. You are provided this information in a string s consisting of characters 'a' and 'b' only, where 'a' denotes that the balloon is amber, where 'b' denotes it being brass colored. When Malvika saw the balloons, she was furious with anger as she wanted all the balloons of the same color. In her anger, she painted some of the balloons with the opposite color (i.e., she painted some amber ones brass and vice versa) to make all balloons appear to be the same color. As she was very angry, it took her a lot of time to do this, but you can probably show her the right way of doing so, thereby teaching her a lesson to remain calm in difficult situations, by finding out the minimum number of balloons needed to be painted in order to make all of them the same color.



#include <iostream>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        string colorOfBalloons;

        cout<<"Enter the string of color of the balloons : ";
        cin>>colorOfBalloons;

        int colorOfAmberBalloon = 0,colorOfBrassBalloon = 0;

        for(int i = 0;i < colorOfBalloons.length();i++){
            if(colorOfBalloons[i] == 'a') colorOfAmberBalloon++;

            else colorOfBrassBalloon++;
        }

        cout<<"The minimum number of balloons needed to be painted in order to make all of them the same color will be : "<<min(colorOfAmberBalloon,colorOfBrassBalloon)<<endl;
    }
}