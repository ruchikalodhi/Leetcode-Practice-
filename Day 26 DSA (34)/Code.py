class Solution(object):
    def searchRange(self, nums, target):
        left = self.find(nums, target, True)
        if left == -1:
            return [-1, -1]
        right = self.find(nums, target, False)
        return [left, right]
    
    def find(self, nums, target, isLeft):
        left, right = 0, len(nums) - 1
        a = -1
        
        while left <= right:
            mid = left + (right - left) // 2
            if nums[mid] == target:
                a = mid
                if isLeft:
                    right = mid - 1
                else:
                    left = mid + 1
            elif nums[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
                
        return a
