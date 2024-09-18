// Write a program to input two student's names and percentages and print the name of the student with the higher percentage. In case they score equal percentages, print 'equal'.


#include <iostream>
using namespace std;
int main() {
	string name1,name2;
    cout<<"Enter the first student's name : ";
	cin>>name1;

    cout<<"Enter the second student's name : ";
    cin>>name2;

	int marksOfFirstStudent,marksOfSecondStudent;
    cout<<"Enter the marks of first student : ";
	cin>>marksOfFirstStudent;

    cout<<"Enter the marks of second student : ";
    cin>>marksOfSecondStudent;

	if(marksOfFirstStudent > marksOfSecondStudent) cout<<name1;

	else if(marksOfFirstStudent == marksOfSecondStudent) cout<<"Equal";

	else cout<<name2;
}
