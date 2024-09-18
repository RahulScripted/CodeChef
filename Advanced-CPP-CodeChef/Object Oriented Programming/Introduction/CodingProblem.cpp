// Create a object of student class with given name and age. Use display method to print information of the Student.




#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int age;

    void display(){
        cout<<name<<" "<<age<<endl;
    }
};

int main(){
    Student s;
    cin>>s.name>>s.age;
    s.display();
}