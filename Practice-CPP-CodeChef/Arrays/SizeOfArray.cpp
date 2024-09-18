// Write a program to declare and initialize an array of strings and print the size of the array, 1st element and 3rd element in bytes. The strings are {Code, Chef, C}


 #include <iostream>
using namespace std;

int main() {
    string names[] = {"Code", "Chef", "C"};
    // cout<<"Size of the array : ";
    cout<<sizeof(names)<<endl;
    // cout<<"Size of the 1st element of the array : ";
    cout<<sizeof(names[0])<<endl;
    // cout<<"Size of the 3rd element of the array : ";
    cout<<sizeof(names[2])<<endl;
}