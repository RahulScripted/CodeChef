// You are given a class Student having attributes as name and age and a display method to print name and age of Student. Create a object of student class with given name and age. Use display method to print information of the Student.




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
    
    return 0;
}