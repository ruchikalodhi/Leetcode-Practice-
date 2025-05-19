**📘 Problem: 1979. Find Greatest Common Divisor of Array**

Difficulty: **Easy**

Topic: **Math / GCD / Number Theory**

Language: **Python**

**📄 Problem Description** ~ 
Given an integer array nums, return the greatest common divisor (GCD) of the smallest and largest numbers in the array.

**🚀 Approach (First Person)**

~ I first found the smallest and largest elements in the array using min() and max().

~ Then I implemented the Euclidean algorithm to compute the GCD of these two values.

~ Since the problem only requires the GCD of min and max, there's no need to process all elements.

**🔁 Euclidean Algorithm**
This works on the principle:
gcd(a, b) = gcd(b, a % b)



**⏱ Time Complexity:**

~ O(log(min(a, b))) for GCD computation

~ O(n) to find min and max in the array

**🧠 Space Complexity:**
O(1)
