**🔍 Problem: 236. Lowest Common Ancestor of a Binary Tree**

Difficulty: Medium  
Topic: Binary Tree / DFS / Recursion  
Language: Python  

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~  
Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

The LCA of two nodes `p` and `q` is the lowest node in the tree that has both `p` and `q` as descendants (a node can be a descendant of itself).

---------------------------------------------------------------------------------------------------------------------------
![Screenshot 2025-06-04 233231](https://github.com/user-attachments/assets/d8c2391c-e60f-49ab-91e3-050ad3ebc0a9)

**🚀 Approach (Recursive DFS):**

~ I performed a post-order traversal of the tree.  
~ If the current node is `None`, I return `None`.  
~ If the current node matches either `p` or `q`, I return the current node.  
~ Then I recursively check both left and right subtrees.  
~ If both left and right return non-null nodes, then the current node is the LCA.  
~ Otherwise, I return the non-null result from either left or right.

This ensures the search covers all paths and backtracks correctly to find the lowest ancestor.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n)**  
Each node is visited once.

**💾 Space Complexity: O(h)**  
Due to recursion stack, where `h` is the height of the tree.

---------------------------------------------------------------------------------------------------------------------------
