// Write a program to print the grades of a student based on the marks they have obtained provided as input. The student is graded A if marks are greater than 90, B if marks are greater than 70, C if greater than or equal to 40, else F.


 #include <iostream>
using namespace std;
int main() {
    int marks;
    // cout<<"Enter the marks : ";
    cin>>marks;
    if(marks > 90) cout<<"Grade A"<<endl;
    else if(marks > 70) cout<<"Grade B"<<endl;
    else if(marks >= 40) cout<<"Grade C"<<endl;
    else cout<<"Grade F"<<endl;
}