**🔢 Problem: 32. Longest Valid Parentheses**

Difficulty: Hard

Topic: Stack, Dynamic Programming, Greedy

Language: C++

--------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~ 
Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

--------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Stack-Based, First Person)**

~ I used a stack to store indices of unmatched parentheses.

~ During the first pass through the string:

If I encountered '(', I pushed its index.

If I found ')', I checked if the top of the stack was '('; if so, I popped it. Otherwise, I pushed the ')' index (marking it as unmatched).

~ After the first pass, the stack contains only unmatched indices.

~ I then calculated the maximum valid length by finding the longest gap between unmatched indices (or between the end of the string and the top of the stack).

--------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n)**

Single pass to process characters and another to evaluate result.

**💾 Space Complexity: O(n)**

Stack stores indices of unmatched parentheses.
