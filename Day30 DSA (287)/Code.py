class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        check = [False] * (len(nums)+1)
        for num in nums:
            if check[num]:
                return num
            check[num] = True

        return -1
