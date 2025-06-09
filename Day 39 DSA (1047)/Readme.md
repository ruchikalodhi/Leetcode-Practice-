**🔍 Problem: 1047. Remove All Adjacent Duplicates In String**

**Difficulty:** Easy  
**Topic:** Stack, String  
**Language:** Python

------------------------------------------------------------

**📄 Problem Description** ~  
Given a string `s`, repeatedly remove adjacent duplicate characters from the string.  
Return the final string after all such duplicate removals have been performed.

The answer is guaranteed to be unique.

------------------------------------------------------------
![Screenshot 2025-06-08 235021](https://github.com/user-attachments/assets/04167105-aff6-42d1-b537-5bc2f9823ef3)

**🚀 Approach (Stack-Based Removal)**

~ ✅ Initialized an empty stack.  
~ ✅ Iterated through each character in the string:  
  • If the stack is not empty and the top element equals the current character, popped it (i.e., removed adjacent duplicates).  
  • Otherwise, pushed the character to the stack.  
~ ✅ Joined all elements in the stack to return the final result string.

------------------------------------------------------------

**⏱ Time Complexity: O(n)**  
Each character is pushed and popped at most once.

**💾 Space Complexity: O(n)**  
Stack can store up to all characters in the worst case.

------------------------------------------------------------
