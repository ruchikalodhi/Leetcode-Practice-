**🌳 Problem: 94. Binary Tree Inorder Traversal**

Difficulty: **Easy**

Topic: **Tree, DFS, Recursion**

Language: **Python**

-----------------------------------------------------------------------------

**📄 Problem Description** ~ 
Given the root of a binary tree, return the inorder traversal of its nodes' values.
Inorder traversal visits nodes in the order: left → root → right.

-----------------------------------------------------------------------------

**🚀 Approach (Recursive)**

~ I used a helper function to perform a standard recursive inorder traversal.

~ Starting from the root, I recursively visited the left subtree, then added the current node's value to the result list, and finally traversed the right subtree.

~ This approach mimics the natural recursive structure of trees and is simple and elegant for most use cases.

-----------------------------------------------------------------------------

**🧠 Time & Space Complexity:**

**Time**	O(n)

**Space** (call stack)	O(h)

 ~ n is the number of nodes

 ~ h is the height of the tree (can be O(n) in worst-case unbalanced trees)

![image](https://github.com/user-attachments/assets/bd677bdc-cba1-4ac2-a888-d9d4216d847b)
