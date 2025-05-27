**Subarray LCM Counter** ~ 
This repository contains a C++ solution to count the number of subarrays within a given array nums whose least common multiple (LCM) is exactly equal to a specified integer k.

----------------------------------------------------------------------------------------------
**Problem Description** ~ 
Given an array of integers nums and an integer k, the task is to find and return the total number of non-empty subarrays of nums such that the least common multiple (LCM) of all elements in the subarray is equal to k.

----------------------------------------------------------------------------------------------
**Solution Approach**

~ The solution employs a brute-force approach with an optimization:

~ Outer Loop (Starting Point): It iterates through each element of the nums array, considering it as the potential starting point (i) of a subarray.

~ Inner Loop (Extending Subarray): For each starting point i, an inner loop iterates from i to the end of the array, extending the current subarray by including subsequent elements (j).

~ LCM Calculation: Inside the inner loop, the curLCM (current LCM) is continuously updated by calculating the LCM of curLCM and the new element nums[j]. The std::lcm function from the C++ standard library is used for this purpose.

~ Optimization: If at any point curLCM becomes greater than k, it's impossible for any further extension of this subarray to result in an LCM equal to k (as LCMs only increase or stay the same when new positive integers are introduced). Therefore, the inner loop breaks early, improving efficiency.

~ Counting Valid Subarrays: If curLCM is found to be exactly equal to k, the counter ans is incremented.

----------------------------------------------------------------------------------------------
Complexity Analysis ~ 

--> Time Complexity: O(N2logK)

The solution uses two nested loops, each iterating up to N times (where N is the length of nums). This contributes O(N2).

Inside the inner loop, the std::lcm function is called. The lcm(a, b) operation typically takes O(log(min(a,b))) time, as it relies on the greatest common divisor (GCD) calculation. In the worst case, a and b can be up to k. Thus, each LCM calculation takes O(logK) time.

Combining these, the total time complexity is approximately O(N2logK).

--> Space Complexity: O(1)

The solution uses a constant amount of extra space for variables like ans, curLCM, and loop counters, regardless of the input array size.

----------------------------------------------------------------------------------------------
#include <vector>
#include <numeric> // Required for std::lcm in C++17+

class Solution {
public:
    int subarrayLCM(std::vector<int>& nums, int k) {
        int ans = 0;

        for (int i = 0; i < nums.size(); ++i) {
            int curLCM = nums[i];
            // If the first element itself is greater than k, it can't form a valid subarray.
            // This also handles the case where nums[i] is 0, though problem constraints usually
            // specify positive integers.
            if (curLCM > k) {
                continue; // Skip to the next starting point
            }
            if (curLCM == k) {
                ++ans;
            }

            for (int j = i + 1; j < nums.size(); ++j) {
                // Calculate LCM of current subarray
                // std::lcm is available in <numeric> since C++17
                // For older C++, you'd need to implement LCM using GCD:
                // curLCM = (1LL * curLCM * nums[j]) / std::gcd(curLCM, nums[j]);
                
                // Important: Check for potential overflow before calculating LCM.
                // If curLCM * nums[j] exceeds k, the actual LCM will also exceed k.
                // This check helps prevent overflow and early exit.
                if (1LL * curLCM * nums[j] / std::gcd(curLCM, nums[j]) > k) {
                    curLCM = k + 1; // Set to a value greater than k to trigger break
                } else {
                    curLCM = std::lcm(curLCM, nums[j]);
                }

                if (curLCM > k) {
                    break; // Optimization: If LCM exceeds k, no further extension will work
                }
                if (curLCM == k) {
                    ++ans;
                }
            }
        }

        return ans;
    }
};

