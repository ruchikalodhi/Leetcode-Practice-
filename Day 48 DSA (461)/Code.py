class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        cnt = 0
        x, y = bin(x)[2:], bin(y)[2:]
        x = max(0,len(y)-len(x))*"0" + x
        y = max(0,len(x)-len(y))*"0" + y

        for i in range(len(x)):
            if x[i] != y[i]:
                cnt += 1

        return cnt
