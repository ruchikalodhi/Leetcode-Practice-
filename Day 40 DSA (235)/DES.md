C++ code

```class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int small = min(p->val, q->val);
        int large = max(p->val, q->val);
        while (root != nullptr) {
            if (root->val > large) 
            //  left subtree
                root = root->left;
            else if (root->val < small) 
            // right subtree
                root = root->right;
            else 
            //small <= root.val <= large -> This root is the LCA between p and q
                return root;
        }
        return nullptr;
    }
};
```

**🔍 Problem: 235. Lowest Common Ancestor of a Binary Search Tree**


**🚀 Approach (BST Property with Iterative Traversal):**

* I used the **properties of a Binary Search Tree** (BST) where:

  * Left subtree contains values **less than** the current node.
  * Right subtree contains values **greater than** the current node.

* Defined `small` and `large` as the minimum and maximum of `p->val` and `q->val` to generalize the traversal.

* Started at the root and:

  * If `root->val` is **greater than both**, moved to the **left subtree**.
  * If `root->val` is **less than both**, moved to the **right subtree**.
  * Otherwise, the current `root` lies **between** the two values — hence, it’s the **Lowest Common Ancestor (LCA)**.


**✅ Key Insight:**
No need to recurse or store paths — BST rules guide directly to the LCA.

**⏱ Time Complexity:** `O(h)`, where `h` is the height of the tree
**💾 Space Complexity:** `O(1)` (Iterative, no stack usage)

