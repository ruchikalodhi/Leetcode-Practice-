class Solution {
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
