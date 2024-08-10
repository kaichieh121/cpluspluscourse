#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono> 

using namespace std;

vector<int> generateArray(int size) {
    vector<int> arr(size);
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 1000; // Random integers between 0 and 999
    }
    return arr;
}

// Implement the sorting algorithms here
void bubbleSort(vector<int>& arr) {
    
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}


int main() {
    vector<int> arr = generateArray(100);
    // printArray(arr);

    // Bubble Sort
    vector<int> bubbleArr = arr;
    auto start = chrono::high_resolution_clock::now();
    bubbleSort(bubbleArr);
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Bubble Sort took " << duration.count() << " microseconds.\n";
    // printArray(bubbleArr);

    // check the time for sort using library

    return 0;
}
