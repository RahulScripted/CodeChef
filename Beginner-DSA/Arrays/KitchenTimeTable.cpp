// There are N students living in the dormitory of Berland State University. Each of them sometimes wants to use the kitchen, so the head of the dormitory came up with a timetable for kitchen's usage in order to avoid the conflicts:

// 1. The first student starts to use the kitchen at the time 0 and should finish the cooking not later than at the time A1.
// 2. The second student starts to use the kitchen at the time A1 and should finish the cooking not later than at the time A2.
// 3. And so on.
// 4. The N-th student starts to use the kitchen at the time AN-1 and should finish the cooking not later than at the time AN

// The holidays in Berland are approaching, so today each of these N students wants to cook some pancakes. The i-th student needs Bi units of time to cook. The students have understood that probably not all of them will be able to cook everything they want. How many students will be able to cook without violating the schedule?



#include <iostream>
#include <climits>
using namespace std;
int main(){
    int testCase;
    cout<<"Enter the no. of test cases : ";
    cin>>testCase;
    while(testCase--){
        int noOfStudents;
        cout<<"Enter the no. of students : ";
        cin>>noOfStudents;

        int cookingTime[noOfStudents];
        for(int i = 0;i < noOfStudents;i++){
            cout<<"Enter the amount of time fixed for "<<(i + 1)<<"th student : ";
            cin>>cookingTime[i];
        }

        int timeRequiredByStudent[noOfStudents];
        for(int i = 0;i < noOfStudents;i++){
            cout<<"Enter the amount of time required for "<<(i + 1)<<"th student : ";
            cin>>timeRequiredByStudent[i];
        }

        int count = 0;
        for(int i = 0;i < noOfStudents;i++){
            if(i == 0){
                if(cookingTime[i] >= timeRequiredByStudent[i]) count++;
            }
            else{
                if((cookingTime[i] - cookingTime[i - 1]) >= timeRequiredByStudent[i]) count++;
            }
        }

        cout<<"No. of students will be able to cook without violating the schedule will be : "<<count<<endl;
    }
}