#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

std::vector<int> compressCoordinates(const std::vector<int>& arr) {
    // Step 1: Extract unique elements and sort them
    // search up vector.erase and std::unique

    // Step 2: Create a mapping from each element to its compressed value
    // what data structure is good for loopup?

    // Step 3: Replace each element in the original array with its compressed value

    return compressedArr;
}

int main() {
    std::vector<int> arr = {100, 300, 100, 200, 300, 400, 100};
    
    std::vector<int> compressedArr = compressCoordinates(arr);
    
    std::cout << "Original Array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\nCompressed Array: ";
    for (int num : compressedArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}