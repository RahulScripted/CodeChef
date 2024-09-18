// Write a C++ program that uses multithreading to calculate the sum of elements in an array of size 9 concurrently. The program should divide the array into three segments, and each thread should calculate the sum of a segment. Finally, the main thread should combine the individual sums to calculate the total sum of the array.




#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
using namespace std;

const int ARRAY_SIZE = 9;
const int NUM_SEGMENTS = 3;

mutex mutex; // Mutex for synchronization

// Function to calculate the sum of a segment
void calculateSegmentSum(const vector<int>& array, int segmentId, int& segmentSum) {
    segmentSum = 0;
    int start = segmentId * (ARRAY_SIZE / NUM_SEGMENTS);
    int end = (segmentId + 1) * (ARRAY_SIZE / NUM_SEGMENTS);

    for (int i = start; i < end; ++i) {
        segmentSum += array[i];
    }
}

int main() {
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // threads vector stores all the threads
    vector<thread> threads(NUM_SEGMENTS);
    // segmentSums stores sum of each segment
    vector<int> segmentSums(NUM_SEGMENTS);

    // Create threads to calculate segment sums
    for (int i = 0; i < NUM_SEGMENTS; ++i) {
        // passing array, segment index, and segmentSums[i] (to store the sum of segment i) as parameter
        threads[i] = thread(calculateSegmentSum, ref(array), i, ref(segmentSums[i]));
    }

    // Wait for all threads to finish
    for (int i = 0; i < NUM_SEGMENTS; ++i) {
        threads[i].join();
    }

    // Calculate the total sum by combining segment sums
    int totalSum = 0;
    for (int i = 0; i < NUM_SEGMENTS; ++i) {
        totalSum += segmentSums[i];
    }

    // Display individual segment sums and the total sum
    for (int i = 0; i < NUM_SEGMENTS; ++i) {
        cout << "Segment " << i << " Sum: " << segmentSums[i] << endl;
    }
    cout << "Total Sum: " << totalSum << endl;

    return 0;
}
