def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]

def bubbleDown(arr, n , i):
    largest = i
    left = i * 2
    right = i*2 + 1
    if left<n and arr[largest]<arr[left]:
        largest = left 
    if right<n and arr[largest]<arr[right]:
        largest = right
    if largest != i:
        swap(arr, i, largest)
        bubbleDown(arr, n,largest)

def heapSort(arr):
    n = len(arr)
    
    #Maxheap
    for i in range(n//2 -1 , -1, -1):
        bubbleDown(arr,n,i)
    
    for i in range(n-1, 0, -1):
        swap(arr, i, 0)
        bubbleDown(arr, i, 0)


arr = [12, 11, 13, 5, 6, 7]
heapSort(arr)
print(arr)