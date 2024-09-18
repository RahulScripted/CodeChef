// You are given a Student class having name and age as attributes and a display method. This class also has a parameterized constructor having name and age as parameters to initialize the value of name and age of student respectively. Given name and age as input, Create a student class, initialize the values and then print the information of Student using display method.




#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string name,int age){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};


int main() {
    string s; 
    int a;
    cin>>s>>a;
    Student obj(s,a);
    obj.display();
}