// Initially the name of the user is "Alice" and password is "Wonderland". Print this information using get function. Now, change the name of the user to "Tom" and password to "Jerry" using set function. Print this information using get function.




#include <iostream>
using namespace std;

class User{
private:
    string name="Alice";
    string password="Wonderland";

public:
    void set(string name,string password){
        this->name = name;
        this->password = password;
    }
    void get(){
        cout<<name<<" "<<password<<endl;
    }
};

int main() {
    User obj;
    obj.get();
    obj.set("Tom","Jerry");
    obj.get();
    return 0;
}