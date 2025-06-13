class Solution:
    def reverseWords(self, s: str) -> str:
        string = s.split()
        reverseStr = string[::-1]
        return " ".join(reverseStr)
