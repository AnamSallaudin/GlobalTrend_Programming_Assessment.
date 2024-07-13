/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

void rotateRight(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0 || k % n == 0) return; // No rotation needed
    
    k = k % n; // Adjust k in case it's larger than the array size
    
    // Reverse the entire array
    reverse(nums.begin(), nums.end());
    
    // Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);
    
    // Reverse the remaining elements
    reverse(nums.begin() + k, nums.end());
}

// Function to print the elements of an array
void printArray(vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    printArray(nums);

    rotateRight(nums, k);

    cout << "After rotating right by " << k << " steps: ";
    printArray(nums);

    return 0;
}
