**🔍 Problem: 48. Rotate Image**

Difficulty: Medium

Topic: Matrix / In-place Transformation

Language: C++

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~  
You are given an `n x n` 2D matrix representing an image. Rotate the image by 90 degrees (clockwise) in-place.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Reverse + Transpose)**

~ I first reversed the matrix vertically using `reverse(matrix.begin(), matrix.end())`.

~ Then, I transposed the matrix by swapping elements across the diagonal:  
  `swap(matrix[i][j], matrix[j][i])` for all `j > i`.

~ This two-step transformation (reverse + transpose) results in a 90° clockwise rotation.

This approach uses no extra space and performs the transformation in-place.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n²)**  
Each element in the matrix is visited once for the transpose step.

**💾 Space Complexity: O(1)**  
No extra space used; all operations are in-place.

---------------------------------------------------------------------------------------------------------------------------
