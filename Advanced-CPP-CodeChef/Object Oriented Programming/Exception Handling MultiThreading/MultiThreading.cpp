// This C++ code demonstrates multithreading with two threads (t1 and t2) that run two functions (threadFunction1 and threadFunction2) concurrently.



#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;

void threadFunction1() {
    for (int i = 0; i < 5; ++i) {
        sleep(0.01);
        cout << "Thread 1: " << i << endl;
    }
}

void threadFunction2() {
    for (int i = 0; i < 5; ++i) {
        sleep(0.01);
        cout << "Thread 2: " << i << endl;
    }
}

int main() {
    thread t1(threadFunction1);
    thread t2(threadFunction2);

    t1.join(); // Wait for t1 to finish
    t2.join(); // Wait for t2 to finish

    cout << "Main thread: Done!" << endl;

    return 0;
}
