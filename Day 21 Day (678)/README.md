**🔐 Problem: 678. Valid Parenthesis String**

Difficulty: **Medium**

Topic: **Greedy, Stack, String**

Language: **C++**

------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~
You are given a string s containing only '(', ')', and '*'. A '*' can represent either '(', ')', or an empty string.
Determine if the string is a valid parenthesis string.

~ A string is valid if:

~ Every '(' has a matching ')'

~ '*' can be assigned flexibly to satisfy pairing

~ The pairs are properly nested in order

------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Greedy, First-Person)**

~ I performed two passes over the string — one left-to-right and one right-to-left.

~ In the first pass, I treated '*' as '(' or empty. For each ')', I checked if there were enough unmatched opens or wildcards to balance it.

~ In the second pass, I treated '*' as ')' or empty. For each '(', I ensured a closing match exists later or as a wildcard.

~ If both passes are valid, then the string is considered balanced and valid.

This greedy approach works without needing stacks, and is faster in both time and space.

------------------------------------------------------------------------------------------------------------------------

⏱ Time Complexity:
 O(n) — two linear passes over the string

🧠 Space Complexity:
 O(1) — constant space, no stack or extra array

------------------------------------------------------------------------------------------------------------------------
