
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def hasPathSum(self, root: Optional[TreeNode], target_sum: int) -> bool:
        def dfs(node, current_sum):
            if node is None:
                return False
            current_sum += node.val
            if node.left is None and node.right is None and current_sum == target_sum:
                return True
            return dfs(node.left, current_sum) or dfs(node.right, current_sum)
        
        return dfs(root, 0)
