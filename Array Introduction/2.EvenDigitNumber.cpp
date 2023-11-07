/*
Problem Statement - Given an array nums of integers, return how many of them contain an even number of digits.

Example 1 -
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation:
12 contains 2 digits (even number of digits).
345 contains 3 digits (odd number of digits).
2 contains 1 digit (odd number of digits).
6 contains 1 digit (odd number of digits).
7896 contains 4 digits (even number of digits).
Therefore only 12 and 7896 contain an even number of digits.


Example 2 -
Input: nums = [555,901,482,1771]
Output: 1
Explanation:
Only 1771 contains an even number of digits.

Constraints -
             1 <= nums.length <= 500
             1 <= nums[i] <= 105
*/

/*
Hint -
How to compute the number of digits of a number ?
Divide the number by 10 again and again to get the number of digits.
*/

/* Solution */

#include <iostream>
#include <vector>
using namespace std;

int findNumbers(vector<int> &nums)
{
    int count = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int digits = 0;
        while (nums[i])
        {
            nums[i] /= 10;
            digits++;
        }
        if (digits % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> arr;
    arr.push_back(555);
    arr.push_back(901);
    arr.push_back(482);
    arr.push_back(1771);

    cout << findNumbers(arr) << endl;
    return 0;
}

/*
Practice Problem link -
https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
*/