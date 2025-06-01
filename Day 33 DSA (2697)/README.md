![Screenshot 2025-06-02 001959](https://github.com/user-attachments/assets/b1987d22-fc7f-4fb6-a709-29356ed7fbad)

**🔍 Problem: Lexicographically Smallest Palindrome**

Difficulty: Easy

Topic: String / Palindrome

Language: Python

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~  
Given a string `s`, you can change **each character** at most once.  
Your goal is to make the string a palindrome that is **lexicographically smallest** possible.  
Return the resulting palindrome.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Two-Pointer Character Minimization)**

~ I converted the string to a list of characters for easy modification.

~ I used a loop to traverse only the first half of the string.

~ For each pair of characters `(i, ~i)` from both ends, I assigned the **minimum** of the two to both positions to maintain the palindrome structure and ensure lexicographic minimality.

~ Finally, I returned the modified character list joined as a string.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n)**  
We traverse half the string once, so overall linear time.

**💾 Space Complexity: O(n)**  
Due to character list storage.

---------------------------------------------------------------------------------------------------------------------------
