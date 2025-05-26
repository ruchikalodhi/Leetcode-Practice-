**Problem: 112. Path Sum**

Difficulty: **Easy**

Topic: **Binary Tree, DFS**

Language: **Python**

---------------------------------------------------------------------------------------

**Problem Description** ~ 
Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

---------------------------------------------------------------------------------------

**Approach: Recursive DFS**

~ I used a depth-first search approach to explore each root-to-leaf path.
~ At each node, I maintained a running sum of values.
~ When a leaf node is reached, I checked if the current sum equals the target sum.
~ If any path satisfies this condition, the function returns True.

---------------------------------------------------------------------------------------

**Code Snippet**

PYTHON

![image](https://github.com/user-attachments/assets/cc02ebb8-5614-409d-bda7-08a9ec37e90c)

---------------------------------------------------------------------------------------
        
**Time and Space Complexity**

Time: O(n) where n is the number of nodes in the tree
Space: O(h) where h is the height of the tree (due to recursion stack)

---------------------------------------------------------------------------------------

**Example**

Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
Output: True

--------------------------------------------------------------------------------------

**Tags**
Binary Tree, DFS, Recursion, Python, LeetCode, Tree Traversal, DSA
