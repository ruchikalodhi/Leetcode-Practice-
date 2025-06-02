**🔍 Problem: 58. Length of Last Word**

Difficulty: Easy

Topic: Strings

Languages: C++ & Python

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description**  
Given a string `s` consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (C++)**

~ I started from the end of the string and skipped trailing spaces.

~ Then I counted characters until the next space or beginning of the string.

~ This gives the length of the last word in one pass without extra memory.

cpp
```
int lengthOfLastWord(string s) {
    int length = 0, i = s.size() - 1;
    while (i >= 0 && s[i] == ' ') i--;
    while (i >= 0 && s[i] != ' ') length++, i--;
    return length;
}
```
---------------------------------------------------------------------------------------------------------------------------
🚀 Approach (Python)

~ Used Python string methods to trim trailing spaces and split the string.

~ The last element of the split result is the last word; returned its length.

python
```
def lengthOfLastWord(self, s: str) -> int:
    return len(s.strip().split()[-1])
```
---------------------------------------------------------------------------------------------------------------------------

⏱ Time Complexity: O(n)
Traverses the input string once (or splits it once in Python).

💾 Space Complexity: O(1) for C++
In Python, uses extra space due to .split() → O(n)
