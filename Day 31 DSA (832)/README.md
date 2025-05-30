**🔍 Problem: 832. Flipping an Image**

Difficulty: Easy

Topic: Arrays / Matrix Manipulation / Bitwise

Language: Python

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~  

Given a binary matrix `image`, first reverse each row (flip horizontally), then invert the image by changing all `0`s to `1`s and all `1`s to `0`s. Return the resulting image.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Reverse + Bitwise Invert)**

~ I initialized an empty list `x` to store the transformed rows.

~ For each row in the image:
   - Reversed the row using slicing (`[::-1]`) and appended it to `x`.
   - Then iterated over each bit in the reversed row and inverted it using XOR (`^1`).

~ Finally, returned the transformed matrix `x`.

This method handles both flipping and inversion in one pass per row and is easy to implement.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n * m)**  

Where `n` is the number of rows and `m` is the number of columns.

**💾 Space Complexity: O(n * m)**  

A new matrix is created to store the result.

---------------------------------------------------------------------------------------------------------------------------
