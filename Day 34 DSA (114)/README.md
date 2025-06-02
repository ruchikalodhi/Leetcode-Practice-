**🔍 Problem: 114. Flatten Binary Tree to Linked List**

Difficulty: Medium

Topic: Binary Tree / DFS / Linked List

Language: C++

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description**  
Given the root of a binary tree, flatten the tree into a "linked list":

- The "linked list" should use the same TreeNode structure where the right child pointer points to the next node in the list.
- The left child pointer should always be null.
- The flattened tree should follow the same order as a pre-order traversal.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Morris Traversal Inspired In-place Flattening)**

~ I iterated through the tree starting from the root.

~ At each node, if a left child exists, I found the rightmost node (`pred`) in the left subtree.

~ Linked `pred->right` to the current node’s right subtree.

~ Shifted the left subtree to the right, and set the left pointer to `nullptr`.

~ Moved the current pointer to the right child and continued the process.

This approach performs the transformation in-place without recursion or an extra stack.

![image](https://github.com/user-attachments/assets/fafc820a-25f3-45a7-9ebf-39c2ec8b46d1)


---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n)**  
Each node is visited once.

**💾 Space Complexity: O(1)**  
Uses constant extra space (no recursion or stack).

---------------------------------------------------------------------------------------------------------------------------
![Screenshot 2025-06-03 004400](https://github.com/user-attachments/assets/53880bf4-bf03-48f2-8c10-3e5ceca14bc2)
