**🔍 Problem: 404. Sum of Left Leaves**

Difficulty: Easy

Topic: Binary Tree / DFS

Language: Python

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~ 
Given the root of a binary tree, return the sum of all left leaves.

A leaf is a node with no children. A left leaf is a leaf that is the left child of its parent.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Recursive DFS Traversal)**

~ I defined a helper function `recurse(node)` to perform a depth-first traversal.

~ For each node, I checked if it has a left child that is also a leaf (i.e., has no left or right children).

~ If so, I added its value to a running sum.

~ Then I recursively traversed both left and right subtrees to continue collecting values.

~ The base case returns 0 when a node is None.

This approach ensures that only valid left leaves contribute to the final sum.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n)**

Each node in the tree is visited once.

**💾 Space Complexity: O(h)**

Due to recursion stack, where h is the height of the tree.

---------------------------------------------------------------------------------------------------------------------------
