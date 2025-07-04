class Solution(object):
    def breakPalindrome(self, palindrome):
        for i in xrange(len(palindrome) / 2):
            if palindrome[i] != 'a':
                return palindrome[:i] + 'a' + palindrome[i + 1:]
        return palindrome[:-1] + 'b' if palindrome[:-1] else ''
        
