// Write a Player class containing height and weight as attributes. Also this class contains a BMI method which returns an integer BMI of this person.




#include <iostream>
using namespace std;

class Player {
    public: int height;
    int weight;

    int bmi() {
        return weight / (height * height);
    }
};

int main() {
    Player obj;
    cin >> obj.height >> obj.weight;
    cout << obj.bmi();
}