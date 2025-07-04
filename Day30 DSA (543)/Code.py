class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        def diameter(node, res):
            if not node:
                return 0
            left = diameter(node.left, res)
            right = diameter(node.right, res)
            res[0] = max(res[0], left + right)
            return max(left, right) + 1
        res = [0]
        diameter(root, res)
        return res[0]
