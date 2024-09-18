// People in Chefland have three different eye colors, namely brown, blue, and green. green is the rarest of the eye colors whereas brown is most common. The eye color of the child of two people is most likely to be the most common eye color between them. You are given two characters denoting the eye colors of two people in Chefland. The character R denotes bRown color, B denotes Blue color, and G denotes Green color. Determine the most likely eye color of their child. (Print R, B or G denoting bRown, Blue or Green respectively).




#include <iostream>
using namespace std;

int main() {
    char p1, p2;
    cin >> p1 >> p2;

    if (p1 == 'R' || p2 == 'R') cout << "R" << endl;
    else if (p1 == 'B' || p2 == 'B') cout << "B" << endl;
    else cout << "G" << endl;
}