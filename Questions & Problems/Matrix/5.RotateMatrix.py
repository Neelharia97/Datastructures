def swap(a,b):
    a,b = b,a

def rotateMatrix(arr):
    for i in xrange(len(arr)):
        for j in xrange(i):
            swap(arr[i][j],arr[j][i])
          
    print(arr)

if __name__ == "__main__":
    arr = [[1,2,3],
           [4,5,6],
           [7,8,9]]
    print(rotateMatrix(arr))