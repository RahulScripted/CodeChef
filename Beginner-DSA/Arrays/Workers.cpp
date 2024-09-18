// There are N workers; each worker is of one of the following three types:

// 1.  A translator translates some text from Chef's language to another language.
// 2.  An author writes some text in Chef's language.
// 3.  An author-translator can both write a text in Chef's language and translate it to another language.

// Chef wants to have some text written and translated into some language (different from Chef's language). Chef can't do either of those tasks, but he can hire workers. For each i (1 ≤ i ≤ N), if he hires the i-th worker, he must pay that worker ci coins. Help Chef find the minimum total number of coins he needs to pay to have a text written and translated. It is guaranteed that it is possible to write and translate a text.



#include <iostream>
using namespace std;
int main(){
    int noOfWorkers;
    cout<<"Enter the no. of workers : ";;
    cin>>noOfWorkers;

    int cost[noOfWorkers],typeOfWorker[noOfWorkers];
    for(int i = 0;i < noOfWorkers;i++){
        cout<<"Enter the salary of "<<(i + 1)<<"th person : ";
        cin>>cost[i];
    }

    int p = 100000,q = 100000,r = 100000;
    for(int i = 0;i < noOfWorkers;i++){
        cout<<"Enter the type of "<<(i + 1)<<"th worker : ";
        cin>>typeOfWorker[i];
        if(typeOfWorker[i] == 1) p = min(p,cost[i]);
        else if(typeOfWorker[i] == 2) q = min(q,cost[i]);
        else if(typeOfWorker[i] == 3) r = min(r,cost[i]);
    }

    cout<<"The minimum total number of coins he needs to pay will be : "<<min((p + q),r)<<endl;
}