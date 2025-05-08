day 9 - maths problem 

class Solution(object):
    def findNthDigit(self, n):
        length = 1
        count = 9
        start = 1
        
        while n > length * count:
            n -= length * count
            length += 1
            count *= 10
            start *= 10
        
        num = start + (n - 1) // length
        return int(str(num)[(n - 1) % length])

#nth DIGIT PROBLEM
***400. Nth Digit
Solved
Medium
Topics
Companies
Given an integer n, return the nth digit of the infinite integer sequence [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ...].***
