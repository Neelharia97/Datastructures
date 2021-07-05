def SearchMatrix(matrix, target):
    for i in range(len(matrix)):
        if target <= matrix[i][-1]:
            for k in range(len(matrix[i])):
                if target == matrix[i][k]:
                    print(i, k)



if __name__ == "__main__":
    a = [[1,2,3,4],
        [5,6,7,8],
        [9,10,11,12],
        [13,14,15,16]]
    SearchMatrix(a,13)