class Solution(object):
    def makeSmallestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        letters = list(s)

        for i in range(len(s) // 2):
            letters[i] = letters[~i] = min(letters[i], letters[~i])

        return ''.join(letters)
        
