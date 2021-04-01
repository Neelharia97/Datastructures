
def sort(A, size): 
    for i in range(size-1):
        flag = 0
        for j in range(size-1-i):
            if a[j]>a[j+1]:
                a[j],a[j+1] = a[j+1],a[j]
                flag = 1
        if flag = 0:
            break
    return A

if __name__ == "__main__":
    A = [6,3,2,1,5]
    size = len(A)
    sort(A,size)