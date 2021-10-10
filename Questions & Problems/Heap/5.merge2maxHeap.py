def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i] 

def bubbleDown(arr, n, i):
    left = i*2 + 1
    right = i*2 + 2
    largest = i
    if left<n and arr[largest]<arr[left]:
        largest = left
    if right<n and arr[largest]<arr[right]:
        largest = right
    if largest != i:
        swap(arr, i, largest)
        bubbleDown(arr, n, largest)


# def buildMaxHeap(arr):
#     n = len(arr)
#     for i in range(n//2 -1 , -1 , -1):
#         bubbleDown(arr, n , i)
def buildMaxHeap(arr):
    n = len(arr)
    for i in range(n//2 - 1, -1, -1):
        bubbleDown(arr, n , i)


def mergeHeaps(arr1 ,arr2 , n , m):
    merged = [0]*(m+n)
    for i in range(n):
        merged[i] = arr1[i]
    for j in range(m):
        merged[n+j] = arr2[j]
    return merged


a = [10, 5, 6, 2]
b = [12, 7, 9]
merged = (mergeHeaps(a , b, len(a), len(b)))
buildMaxHeap(merged)
print(merged)