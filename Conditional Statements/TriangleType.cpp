// Take the sides of a triangle as user inputs and find if the triangle is equilateral, isosceles, or scalene.


#include <iostream>
using namespace std;
int main() {
    int side1,side2,side3;
    // cout<<"Enter the first side : ";
    cin>>side1;
    // cout<<"Enter the second side : ";
    cin>>side2;
    // cout<<"Enter the third side : ";
    cin>>side3;
    if(side1 == side2 && side2 == side3) cout<<"Equilateral";
    else if((side1 == side2) || (side1 == side3) || (side2 == side3)) cout<<"Isosceles";
    else cout<<"Scalene";
    return 0;
}