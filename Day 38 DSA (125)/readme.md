**🔍 Problem: 125. Valid Palindrome**

**Difficulty:** Easy  
**Topic:** Two Pointers, String, Character Validation  
**Language:** C++

------------------------------------------------------------

**📄 Problem Description** ~  
Given a string `s`, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

A palindrome is a word, phrase, number, or other sequences of characters that reads the same forward and backward, ignoring punctuation, case, and spacing.

------------------------------------------------------------

**🚀 Approach (Two Pointers & Character Filtering)**

~ ✅ Initialized two pointers: `left` at the start and `right` at the end.  
~ ✅ Moved `left` forward until an alphanumeric character is found.  
~ ✅ Moved `right` backward until an alphanumeric character is found.  
~ ✅ Compared the characters at both pointers using `tolower()`.  
~ ✅ If mismatch found, returned `false`.  
~ ✅ Continued until pointers crossed; returned `true` if no mismatch.

![Screenshot 2025-06-08 002933](https://github.com/user-attachments/assets/4044adfb-383c-4d4d-b99c-bf254b16d1a9)

------------------------------------------------------------

**⏱ Time Complexity: O(n)**  
Each character is visited at most once.

**💾 Space Complexity: O(1)**  
No extra space used beyond variables.

------------------------------------------------------------
