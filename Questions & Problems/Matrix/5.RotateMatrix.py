def transpose(arr):
    n = len(arr[0])
    m = len(arr)
    for i in range(n):
        for j in range(i, m):
            arr[i][j], arr[j][i] = arr[j][i], arr[i][j]

    return arr

def reverse(arr):
    n = len(arr[0])
    m = len(arr)
    for i in range(n//2):
        for j in range(m):
            arr[j][i], arr[j][m-i-1] = arr[j][m-i-1],arr[j][i]
    
    return arr

def rotate_matrix(array):
    return reverse(transpose(array))

A = [[1, 2, 3, 4],
     [5, 6, 7, 8],
     [9, 10, 11, 12],
     [13, 14, 15, 16]]

print(rotate_matrix(A))