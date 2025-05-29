**🔍 Problem: 287. Find the Duplicate Number**

Difficulty: Medium

Topic: Binary Search / Array

Language: C++

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~ 
Given an array of integers `nums` containing n + 1 integers where each integer is between 1 and n (inclusive), return the duplicate number.

You must solve the problem **without modifying the array** and using only **constant extra space**.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Binary Search on Value Range)**

~ I used binary search on the value range from 1 to n, not on indices.

~ For each midpoint `mid`, I counted how many numbers in the array are less than or equal to `mid`.

~ If the count was greater than `mid`, it indicated the duplicate must be in the left half (inclusive).

~ Otherwise, the duplicate was in the right half.

~ I repeated this until the left and right pointers converged, which gave the duplicate number.

This solution uses the Pigeonhole Principle to binary search the value space.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n log n)**

Binary search over value range (log n) and O(n) scan for counting in each iteration.

**💾 Space Complexity: O(1)**

Uses only integer variables for counting and pointers.

---------------------------------------------------------------------------------------------------------------------------
