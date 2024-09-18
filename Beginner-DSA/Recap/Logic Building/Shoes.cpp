// Chef has N friends. Chef promised that he would gift a pair of shoes (consisting of one left shoe and one right shoe) to each of his N friends. Chef already has M left shoes. What is the minimum number of extra shoes that Chef will have to buy to ensure that he is able to gift a pair of shoes to each of his N friends? Check sample test cases below for further clarity




#include <iostream>
#include <string>

using namespace std;

int main(){
    int N = 10;
    int M = 10;
    if (N <= M) cout << "We need to buy " <<N<< " shoes" << endl;
    else cout << "We need to buy " << (2 * N) - M  << " shoes" << endl;

    N = 15;
    M = 10;
    if (N <= M) cout << "We need to buy " << N << " shoes" << endl;
    else cout << "We need to buy " << (2 * N) - M  << " shoes" << endl;
}