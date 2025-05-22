**🔍 Problem: 35. Search Insert Position**

Difficulty: Easy

Topic: Binary Search

Language: C++

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~ 
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be inserted in order.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Binary Search)**

~ I used binary search to efficiently locate the target or its correct insert position.

~ If nums[mid] == target, I returned mid.

~ If target is greater, I moved the left pointer to mid + 1.

~ If target is smaller, I moved the right pointer to mid - 1.

~ When the loop ends, left gives the index where the target should be inserted.

This approach ensures O(log n) time complexity — perfect for sorted arrays.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(log n)**

Due to binary search on a sorted array.

**💾 Space Complexity: O(1)**

Uses only a few integer variables for tracking indices.

---------------------------------------------------------------------------------------------------------------------------
