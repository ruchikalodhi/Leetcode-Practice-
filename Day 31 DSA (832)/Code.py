class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        x=[]
        for i in range(len(image)):
            x.append(image[i][::-1])
            for j in range(len(x[i])):
                x[i][j]=x[i][j]^1
        return x
        
