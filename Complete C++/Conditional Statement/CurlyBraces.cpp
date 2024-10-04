// Curly braces




#include <iostream>
using namespace std;

int main(){
    int Age = 25;
    int Vage = 18;

    if(Age < Vage){
        cout << "Not old enough to vote.\n";
        cout << "Wait for " << Vage - Age << " years";
    }
    else cout << "Old enough to vote!";
}