🔍 Problem: 345. Reverse Vowels of a String

Difficulty: Easy

Topic: Two Pointers / String Manipulation

Language: C++

---------------------------------------------------------------------------------------------------------------------------

📄 Problem Description  
Write a function that takes a string as input and reverses only the vowels of a string.

A vowel is one of: 'a', 'e', 'i', 'o', 'u' (both lowercase and uppercase).  
The goal is to reverse the **positions** of vowels, not the entire string.

---------------------------------------------------------------------------------------------------------------------------

🚀 Approach (Two-Pointer Technique)  

~ Initialized two pointers, `left` and `right`, starting from both ends of the string.  
~ Used an `unordered_set` to store all vowels for O(1) lookup.  
~ Moved both pointers inward until vowels are found on both ends.  
~ Swapped the vowels, then continued until the entire string is processed.

This approach ensures that only the vowels are reversed while maintaining the rest of the string as-is.

---------------------------------------------------------------------------------------------------------------------------

⏱ Time Complexity: O(n)  
Each character is visited at most once.

💾 Space Complexity: O(1)  
Constant extra space for the vowel set (excluding the input and output).

---------------------------------------------------------------------------------------------------------------------------
