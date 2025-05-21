**🔧 Problem: 1249. Minimum Remove to Make Valid Parentheses**

Difficulty: **Medium**

Topic: **String, Stack, Greedy**

Language: **C++**

----------------------------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~
Given a string s containing '(', ')', and lowercase English letters, remove the minimum number of parentheses to make the string valid.
~ A valid string:

~ Has matching opening and closing parentheses

~ Has proper order of nesting

~ Return any valid resulting string after the removals.

----------------------------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (First Person)**

~ I used a two-pass greedy approach without a stack to clean the input string.

~ In the first pass (left to right), I skipped any ')' that doesn’t have a matching '('.

~ In the second pass (right to left), I skipped unmatched '(' from the end.

~ The string is built backwards during the second pass, so I reversed it at the end to get the final result.

This solution avoids extra memory for stack positions and efficiently constructs a valid string.

----------------------------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity:**
O(n) – Two linear scans of the string

**💾 Space Complexity:**
O(n) – For storing the intermediate and final strings

----------------------------------------------------------------------------------------------------------------------------------------------

