**🔍 Problem: 129. Sum Root to Leaf Numbers**

Difficulty: Medium  
Topic: Binary Tree, Depth-First Search (DFS)  
Language: Python

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~  
You are given the `root` of a binary tree containing digits from 0 to 9 only.  
Each root-to-leaf path represents a number.  
Return the total sum of all the numbers formed by the root-to-leaf paths.

A **leaf node** is a node with no children.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (DFS with Path Accumulation)**
![Screenshot 2025-06-07 002346](https://github.com/user-attachments/assets/9b9741d4-3f70-485c-acec-0f89b0cf66e3)

~ Defined a helper function `dfs(node, num_sum)` to perform a recursive DFS traversal.  
~ For each visited node, multiplied the running sum `num_sum` by 10 and added the current node’s value.  
~ When a leaf node is reached, returned the current `num_sum` as a valid number.  
~ Accumulated the total by summing the results of left and right subtree calls.  
~ Final result is the sum of all root-to-leaf numbers.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n)**  
Visited every node once, where n is the total number of nodes.

**💾 Space Complexity: O(h)**  
Used space proportional to the height of the tree due to the recursive call stack.

---------------------------------------------------------------------------------------------------------------------------
