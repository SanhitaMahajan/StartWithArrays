/*
Problem Statement - Given an integer array nums sorted in non-decreasing order, 
return an array of the squares of each number sorted in non-decreasing order.

Example 1 -
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

Example 2 -
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

Constraints -
            1 <= nums.length <= 104
            -104 <= nums[i] <= 104
            nums is sorted in non-decreasing order.
*/

/*
Follow up - 
Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach?
*/

/* Solution */

#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
       vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]*nums[i]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }

int main()
{
    std::vector<int> nums;
    nums.push_back(-4);
    nums.push_back(-1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(10);

    vector<int> result = sortedSquares(nums);
    for (int square : result) {
        cout << square << " ";
    }

    return 0;
}

/*
Practice Problem link -
https://leetcode.com/problems/squares-of-a-sorted-array/
*/