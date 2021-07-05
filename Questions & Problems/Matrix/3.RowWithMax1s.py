def findRow(matrix, n, m):
    count = []
    for i in range(n):
        for j in range(m):
            if matrix[i][-1] == 0:
                break
            
            if matrix[i][j] == 1:
                count.append(m-j)
                break
    print(count)
    return max(count)


if __name__ == "__main__":
    a = [[1,1,1,1],
        [0, 0, 1, 1],
        [0, 1, 1, 1],
        [0, 0, 0, 0]]

    n = len(a)
    m = len(a[0])
    
    print(findRow(a, n, m))


