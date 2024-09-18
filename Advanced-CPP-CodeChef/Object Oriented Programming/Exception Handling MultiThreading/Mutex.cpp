// This code is a simple example of using a mutex (short for mutual exclusion) in C++ to ensure exclusive access to a shared resource by multiple threads.




#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex myMutex; // Define a mutex

void exclusiveAccess() {
    myMutex.lock(); // Lock the mutex, blocking other threads
    cout << "Accessing the resource exclusively" << std::endl;
    // Perform some operations on the shared resource here
    myMutex.unlock(); // Unlock the mutex, allowing other threads to access
}

int main() {
    thread thread1(exclusiveAccess);
    thread thread2(exclusiveAccess);

    thread1.join();
    thread2.join();

    return 0;
}
