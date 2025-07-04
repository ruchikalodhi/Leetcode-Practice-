/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root)
            return nullptr;
        if (!root->left && !root->right)
            return root->val == val ? root : nullptr;
        if(root->val == val){
            return root;
        }
        if(root->val < val && root->right)
        {
            return searchBST(root->right, val);
        }
        if(root->val > val && root->left)
        {
            return searchBST(root->left, val);
        }
        return nullptr;
    }
};
