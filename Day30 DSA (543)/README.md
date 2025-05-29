**🔍 Problem: 543. Diameter of Binary Tree**

Difficulty: Easy

Topic: Binary Tree / DFS / Recursion

Language: C++

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~ 
Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Recursive DFS with Depth Tracking)**

~ I defined a helper function `diameter(curr, res)` to recursively calculate the height of each subtree.

~ At each node, I calculated the height of the left and right subtrees.

~ The diameter at that node is `left + right`. I kept track of the maximum using a reference variable `res`.

~ The function returns `1 + max(left, right)` to give the height of the current subtree.

~ The final diameter is stored in `res`.

This approach ensures that the diameter is updated based on the longest path seen during traversal.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n)**

Each node is visited once in a postorder fashion.

**💾 Space Complexity: O(h)**

Due to recursion stack where `h` is the height of the binary tree.

---------------------------------------------------------------------------------------------------------------------------
