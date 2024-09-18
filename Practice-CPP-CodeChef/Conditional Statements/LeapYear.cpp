// Write a program to check whether a given year is a leap year or not. If a number is divisible by 400 or divisible by 4 but not by 100, then the year is considered a leap year. Print Leap year if the given year is a leap year; otherwise, print Not a leap year.


#include <iostream>
using namespace std;
int main() {
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    if(year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)) cout<<"Leap year";
    else cout<<"Not a leap year";
}