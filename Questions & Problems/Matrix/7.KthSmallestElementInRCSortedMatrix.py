def merge(arr1, arr2):
    i, j = 0, 0
    merged_array = []
    while(i<=len(arr1) and j<=len(arr2)):
        if arr1[i]<=arr2[j]:
            merged_array.append(arr1[i])
            i+=1
        else:
            merged_array.append(arr2[j])
            j+=1
    if i<=len(arr1):
        for a in range(i, len(arr1)):
            merged_array.append(arr1[i])
    if j<=len(arr2):
        for a in range(j, len(arr1)):
            merged_array.append(arr1[j])
    
    return merged_array

def find_k_smallest(arr, k):
    min_, max_ = arr[0][0], arr[-1][-1]
    mid,last = (len(arr)*len(arr)/2)-1, len(arr)*len(arr)-1
    if k>mid:
        

    

arr = [[1, 2, 1, 4, 8],
       [3, 7, 8, 5, 1],
       [8, 7, 7, 3, 1],
       [8, 1, 2, 7, 9]]

print(find_k_smallest(arr, len(arr), len(arr[0])))