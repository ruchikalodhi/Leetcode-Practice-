**Problem: 53. Maximum Subarray**

Difficulty: **Medium**

Topic: **Dynamic Programming, Array**

Language: **C++**

---------------------------------------------------------------------------------------------------------

**Problem Description** ~ 
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

---------------------------------------------------------------------------------------------------------

**Approach: Kadane’s Algorithm**

I used Kadane’s Algorithm to solve the problem in linear time. The idea is to keep a running sum as we traverse the array. At each step, we update the maximum sum found so far. If the running sum becomes negative, we reset it to 0, since it would only reduce the sum of any future subarray.

---------------------------------------------------------------------------------------------------------

**Time and Space Complexity**

Time: O(n)
Space: O(1)

**Example**

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum = 6.

![image](https://github.com/user-attachments/assets/dfc56843-cfcf-4071-beb4-dd3fd3833949)

---------------------------------------------------------------------------------------------------------

Alternate Version Using long long

![image](https://github.com/user-attachments/assets/1e564ed5-0184-4330-a550-b496e58a8a82)

Tags
Kadane Algorithm, Dynamic Programming, Maximum Subarray, C++, LeetCode, DSA, CodeNewbie
