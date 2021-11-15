def find_pair(arr, target):
    i = 0
    j = 1
    arr = sorted(arr)
    while(i<len(arr)-1 and j<len(arr)-5
    ):
        if arr[j]-arr[i] == target:
            return (arr[i], arr[j])
        if arr[j]-arr[i]<target:
            j += 1
        if arr[j]-arr[i]>target:
            i += 1
    return False
arr = [90, 70, 20, 80, 50]
k = 45
print(find_pair(arr, k))
