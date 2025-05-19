class Solution(object):
    def findGCD(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        smallest = min(nums)
        largest = max(nums)
        def gcd(a, b):
            while b:
                a, b = b, a % b
            return a
        
        return gcd(smallest, largest)
