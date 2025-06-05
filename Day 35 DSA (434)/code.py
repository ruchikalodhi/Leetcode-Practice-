class Solution(object):
    def countSegments(self, s):
        """
        :type s: str
        :rtype: int
        """
        cnt = 0
        segm = False
        for c in s:
            if c != ' ' and not segm:
                cnt += 1
                segm = True
            elif c == ' ':
                segm = False
        return cnt
