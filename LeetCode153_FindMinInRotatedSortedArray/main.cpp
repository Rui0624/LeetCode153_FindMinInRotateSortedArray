//
//  main.cpp
//  LeetCode153_FindMinInRotatedSortedArray
//
//  Created by Rui on 1/8/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        if(nums[left] <= nums[right]) // if the nums[left] < nums[right} which means the array is not rotated.
            return nums[left];
        
        while(left != (right - 1)) //do the loop if there is still numbers between the left and the right
        {
            int mid = (right + left) / 2; //create a pointer which is in the half of the left and the right
            if(nums[mid] < nums[right]) // if the nums[mid] < nums[right], which means the min number is in the left part
                right = mid; // make the right be the mid, and search the left part.
            else
                left = mid;//or do search the right part
        }
        
        return min(nums[left], nums[right]);
        
    }
};
