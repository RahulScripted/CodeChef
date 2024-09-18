// Each contest - there are approximately 1500 - 2000 users who participate for the 1st time and get rated. The Chef wanted to tell new users some tricks for their 1st contest:

// 1.  Before the contest - you don’t have any rating. So even if you make a single submission - you will become part of the contest rank list and you will get a rating.
// 2.  If you want your rating to increase - give the entire 2 hours to the contest & don’t quit! If you keep trying till the end, and the more time you get, the more problems you can solve. That means larger rating increases!
// 3.  Do not ask your friends for their code. If you copy paste their code, you will get caught during plagiarism checks and your rating will be reduced by 275 points, along with a permanent black mark on your profile.


// Now to the problem: In a contest where N new users visited the contest, 
// 1.  A users just saw the problems and didn't make any submissions and hence won't get any rating.

// 2.  B users who made a submission but could not solve any problem correctly. Thus, after the contest, they will get a rating in the range 800 - 1000.

// 3.  Everyone else could correctly solve at least 1 problem. Thus, they will get a rating strictly greater than 1000 after the contest.

// You need to output the number of new users in the contest who, after the contest, will get a rating and also the number of new users who will get a rating strictly greater than 1000.



#include <iostream>
using namespace std;
int main() {
    int noOfUser,noOfUserCannotMakeAnySubmission,noOfUserMakeIncorrectSubmission;

    // cout<<"Enter the no. of users : ";
    cin>>noOfUser;

    // cout<<"Enter the no. of users didn't make any submission : ";
    cin>>noOfUserCannotMakeAnySubmission;

    // cout<<"Enter the no. of users can't solve problem correctly : ";
    cin>>noOfUserMakeIncorrectSubmission;

	cout<<(noOfUser - noOfUserCannotMakeAnySubmission)<<" "<<(noOfUser - noOfUserCannotMakeAnySubmission - noOfUserMakeIncorrectSubmission)<<endl;
	return 0;
}
