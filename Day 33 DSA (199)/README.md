**🔍 Problem: 199. Binary Tree Right Side View**

Difficulty: Medium

Topic: Binary Tree / BFS / Level Order Traversal

Language: C++

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~  
Given the root of a binary tree, imagine yourself standing on the right side of it. Return the values of the nodes you can see ordered from top to bottom.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Level Order Traversal - BFS)**

~ I used a queue to perform level-order traversal (BFS) on the binary tree.

~ For each level, I stored all node values in a temporary `data` vector.

~ After processing all nodes at the current level, I pushed the last value of `data` into the result vector — since that would be the rightmost node visible at that level.

~ This continued until all levels were processed.

~ Returned the result vector containing all visible nodes from the right side.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n)**  
Every node is visited exactly once.

**💾 Space Complexity: O(w)**  
Where `w` is the maximum width of the tree (number of nodes at the widest level).

---------------------------------------------------------------------------------------------------------------------------

![Screenshot 2025-06-02 001843](https://github.com/user-attachments/assets/a3bedfa6-07af-42b6-ac17-8b4fe9579afe)
![Screenshot 2025-06-02 001858](https://github.com/user-attachments/assets/b4a86133-3240-4cd2-859f-58811a2ab226)

