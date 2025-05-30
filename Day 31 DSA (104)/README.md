**🔍 Problem: 104. Maximum Depth of Binary Tree**

Difficulty: Easy

Topic: Binary Tree / DFS / Recursion

Language: C++

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~  

Given the root of a binary tree, return its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Recursive DFS Traversal)**

~ I used recursion to find the depth of both the left and right subtrees.

~ At each node, I recursively called `maxDepth()` on its left and right children.

~ The maximum depth at that node is `1 + max(left depth, right depth)`.

~ The base case is when the node is null (i.e., `root == nullptr`), returning 0.

This approach ensures a complete depth-first traversal, accumulating the height from the bottom up.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n)**  
Each node is visited once.

**💾 Space Complexity: O(h)**  
Due to the recursion stack, where `h` is the height of the binary tree.

---------------------------------------------------------------------------------------------------------------------------
