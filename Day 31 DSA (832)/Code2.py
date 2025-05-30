class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:

        sol = []

        for i in range(len(image)):
            lst = []
            for j in range(len(image[i])-1, -1, -1):
                if image[i][j] == 1:
                    lst.append(0)
                else:
                    lst.append(1)
            sol.append(lst)
        return sol
