//
//  main.cpp
//  Maxproduct
//
//  Created by Abhilash on 26/3/18.
//  Copyright © 2018 abhi. All rights reserved.
//


// Given an integer array, find three numbers whose product is maximum and output the maximum product.
//
// Example 1:
// Input: [1,2,3]
// Output: 6
// Example 2:
// Input: [1,2,3,4]
// Output: 24
// Note:
// The length of the given array will be in range [3,104] and all elements are in the range [-1000, 1000].
// Multiplication of any three numbers in the input won't exceed the range of 32-bit signed integer.


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // sort the elements in the array
        sort(nums.begin(), nums.end());
        
        int n = nums.size(); // take the size of the array
        // Now the maximum 3 numbers are on the extreme right end of the array (range [-1000, 1000].)
        int p1 = nums[n-1] * nums[n-2] * nums[n-3];
        
        // Now lets take the elements in the extreme left end of the array (range [-1000, 1000])
        int p2 = nums[0] * nums[1] * nums[n-1];
        
        return max(p1, p2);
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
