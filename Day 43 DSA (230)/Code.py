# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def kthSmallest(self, root, k):
        self.arr=[]
        def traversal(root):

            if root==None:

                return

            traversal(root.left)
            self.arr.append(root.val)
            traversal(root.right)

        traversal(root)
        return self.arr[k-1]
