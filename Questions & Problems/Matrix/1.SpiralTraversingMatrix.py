
def SpiralTraversal(matrix,n):
    top = 0
    bottom = n-1
    left = 0
    right = len(matrix[0])-1
    dir_ = 0
    output = []
    while(top<=bottom and left<=right):
        if dir_ == 0:
            for i in range(left,right+1):
                print(matrix[0][i])
                output.append(matrix[top][i])
            top +=1
        elif dir_ == 1:
            for j in range(top,bottom+1):
                output.append(matrix[j][right])
            right-=1
        
        elif dir_ == 2:
            for k in range(right,left-1,-1):
                output.append(matrix[bottom][k])
            bottom -= 1
        
        elif dir_ == 3:
            for l in range(bottom, top-1,-1):
                output.append(matrix[l][left])
            left += 1

        dir_ = (dir_+1)%4

    return output

if __name__ == "__main__":
    a = [[1,2,3,4],
        [5,6,7,8],
        [9,10,11,12],
        [13,14,15,16]]
    

    print(SpiralTraversal(a,len(a)))