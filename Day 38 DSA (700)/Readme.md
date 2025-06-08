**🔍 Problem: 700. Search in a Binary Search Tree**

**Difficulty:** Easy  
**Topic:** Binary Tree, BST, Recursion  
**Language:** C++

------------------------------------------------------------

**📄 Problem Description** ~  
Given the root node of a Binary Search Tree (BST) and an integer value, return the subtree rooted with that node.  
If the node doesn't exist, return `nullptr`.

A BST ensures that for any node:  
- Left subtree values < node value  
- Right subtree values > node value

![Screenshot 2025-06-08 003042](https://github.com/user-attachments/assets/1805077f-f163-4f5c-aed7-56cf8b46e8be)

------------------------------------------------------------

**🚀 Approach (Recursive Search in BST)**

~ ✅ Checked if the root is `nullptr`.  
~ ✅ If current node value equals the target, returned it.  
~ ✅ If target is less than current node's value, searched in the left subtree.  
~ ✅ If greater, searched in the right subtree.  
~ ✅ If no match is found in the relevant subtree, returned `nullptr`.

------------------------------------------------------------

**⏱ Time Complexity: O(h)**  
Traverses the height of the tree. In the worst case (unbalanced tree), it's O(n). For balanced BST, it's O(log n).

**💾 Space Complexity: O(h)**  
Due to recursive call stack, where `h` is the height of the tree.

------------------------------------------------------------
