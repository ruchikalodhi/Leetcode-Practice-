🟦 Problem: 20. Valid Parentheses
Difficulty: Easy
Topic: Stack, String

📄 Problem Description
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
~A string is valid if:
~Open brackets are closed by the same type of brackets
~Open brackets are closed in the correct order
~Every close bracket has a corresponding open bracket of the same type

🔍 Approach
~ I used a stack to keep track of opening brackets
~ For each character, if it's a closing bracket, I checked if the top of the stack is the matching opening bracket
~ If not, I returned False
~ If the stack is empty at the end, the string is valid

⏱️ Time Complexity: O(n)
We go through the string once.

🗃️ Space Complexity: O(n)
In the worst case, we store all opening brackets.
