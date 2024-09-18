// You are tasked with designing a character hierarchy for a simple game. There are three types of characters in the game: Player, Enemy, and GameCharacter. Each character has a name, and they can move. Design a C++ program that models this character hierarchy, ensuring that common data such as the character's name is efficiently shared among the different character types using the concept of virtual base class. Additionally, implement the ability for each character type to move and display their name along with their movement.





#include <bits/stdc++.h>
using namespace std;

class Character {
public:
    string name;
    Character(string n) : name(n) {}

    virtual void move() = 0;
};

class Player : public virtual Character {
public:
    Player(string n) : Character(n) {}

    void move() {
        cout << name << " (Player) is moving." << endl;
    }
};

class Enemy : public virtual Character {
public:
    Enemy(string n) : Character(n) {}

    void move() {
        cout << name << " (Enemy) is moving." << endl;
    }
};

class GameCharacter : public Player, public Enemy {
public:
    GameCharacter(string n) : Character(n), Player(n), Enemy(n) {}

    void move() {
        cout << name << " (GameCharacter) is moving." << endl;
    }
};

int main() {
    GameCharacter character("Hero");
    character.move();
}