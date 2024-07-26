#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>   
#include <ctime>  
#include <chrono> 

using namespace std;
using namespace std::chrono;

vector<int> generateArray(int size) {
    vector<int> arr(size);
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 1000; // Random integers between 0 and 999
    }
    return arr;
}

// Linear search function
void linearSearch(const vector<int>& arr, int target) {

    return;
}

// Binary search function
void binarySearch(const vector<int>& arr, int target) {
    

    return;
}

int main() {
    int N = 10;

    vector<int> A = generateArray(N);
    for(auto elem : A){
        cout << elem << " ";
    }
    cout << endl;

    int target = A[N/2];
    // int target = 1001;


    sort(A.begin(), A.end());

    // Measure time for linear search
    auto start = high_resolution_clock::now();
    linearSearch(A, target);
    auto end = high_resolution_clock::now();
    auto linearDuration = duration_cast<microseconds>(end - start);

    // Measure time for binary search
    start = high_resolution_clock::now();
    binarySearch(A, target);
    end = high_resolution_clock::now();
    auto binaryDuration = duration_cast<microseconds>(end - start);

    // Print results
    cout << "Linear Search Time: " << linearDuration.count() << " microseconds" << endl;
    cout << "Binary Search Time: " << binaryDuration.count() << " microseconds" << endl;

    return 0;




}