**🔍 Problem: 151. Reverse Words in a String**
**Difficulty:** Medium
**Topic:** Two Pointers, String
**Languages:** C++ & Python

---

**📄 Problem Description** \~
Given an input string `s`, reverse the order of the words. A word is defined as a sequence of non-space characters.
Return a string with the words in reverse order concatenated by a single space.
The returned string should not contain leading or trailing spaces, and words should be separated by a single space.

---

**🚀 Approach**

**🔹 C++ (Two-Pointer and In-Place Reversal)**

* Reversed the entire string.
* Traversed word by word, reversed each individual word back.
* Used `left` and `right` pointers to track positions in the result.
* Trimmed trailing spaces and returned the cleaned string.
```
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.size();
        int left = 0;
        int right = 0;
        int i = 0;
        while (i < n) {
            while (i < n && s[i] == ' ')
                i++;
            if (i == n)
                break;
            while (i < n && s[i] != ' ') {
                s[right++] = s[i++];
            }
            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
            i++;
        }
        s.resize(right - 1);
        return s;
    }
};
```
**🔹 Python (Simple Split and Join)**

* Split the string by whitespace to extract all words.
* Reversed the list of words.
* Joined them with single spaces for the final result.

```
class Solution:
    def reverseWords(self, s: str) -> str:
        string = s.split()
        reverseStr = string[::-1]
        return " ".join(reverseStr)
```
---

**⏱ Time Complexity:**

* C++: O(n) — Single pass through the string for reversing and formatting
* Python: O(n) — Splitting, reversing, and joining words

**💾 Space Complexity:**

* C++: O(1) — In-place manipulation
* Python: O(n) — For storing intermediate word list

---

**✅ Sample Input:** `"  hello   world  "`
**✅ Output:** `"world hello"`

---

**📌 LeetCode Link:** [Reverse Words in a String – LeetCode #151](https://leetcode.com/problems/reverse-words-in-a-string/)
**Tags:** `String`, `Two Pointers`, `Simulation`, `Python`, `C++`
