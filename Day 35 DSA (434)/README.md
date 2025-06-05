**🔍 Problem: 434. Number of Segments in a String**

Difficulty: Easy  
Topic: Strings / Parsing  
Language: Python  

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~  
Given a string `s`, return the number of segments in the string.  
A segment is defined to be a contiguous sequence of non-space characters.

Example:  
Input: s = "Hello, my name is Ruchika"  
Output: 5

---------------------------------------------------------------------------------------------------------------------------
![Screenshot 2025-06-04 232820](https://github.com/user-attachments/assets/fc8ac621-8eda-4189-9999-19b68173a1c2)

**🚀 Approach (Manual Segment Counter using Flag):**

~ I traversed the string character by character.  
~ Used a flag `segm` to track if I am inside a word segment.  
~ If the current character is non-space and the flag is False, that marks the beginning of a new segment. I increment the counter and set the flag to True.  
~ If the character is a space, the flag resets to False — ready to detect the next segment.

This avoids using built-in functions like `split()`, and is efficient for learning control flow.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n)**  
We traverse the entire string once.

**💾 Space Complexity: O(1)**  
Only a few auxiliary variables are used.

---------------------------------------------------------------------------------------------------------------------------
