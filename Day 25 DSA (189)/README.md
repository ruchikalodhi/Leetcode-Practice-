**LeetCode Problem 189: Rotate Array**
---------------------------------------------------------------------------------------

**Problem Description** ~  
Rotate an array nums to the right by k steps, where k is non-negative.

---------------------------------------------------------------------------------------

**Approaches**

---------------------------------------------------------------------------------------

_**Approach 1:**_ ~  Reverse Parts of the Array (In-place)

Normalize k by taking k % n where n is the array size.

Reverse the entire array.

Reverse the first k elements.

Reverse the remaining n-k elements.

This effectively rotates the array in-place without extra space.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

![image](https://github.com/user-attachments/assets/a1f1170b-bfe6-4ed3-bd7c-f531a430dfae)


---------------------------------------------------------------------------------------

_**Approach 2:**_ ~  Using Extra Space

Normalize k by k % n.

Copy the last k elements into a temporary array.

Shift the first n-k elements to the right by k positions.

Copy the temporary array back to the beginning of the original array.

**Time Complexity:** O(n)

**Space Complexity:** O(k)

![image](https://github.com/user-attachments/assets/692bcbd9-7660-4cdf-bf3f-7ed113f3572c)


---------------------------------------------------------------------------------------
