# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        def recurse(node):
            if not node:
                return 0
            add = 0
            if node.left and not node.left.left and not node.left.right:
                add += node.left.val
            return add + recurse(node.left) + recurse(node.right)
        
        return recurse(root)
