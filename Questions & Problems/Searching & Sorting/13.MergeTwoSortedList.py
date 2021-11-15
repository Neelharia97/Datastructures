def merge_two_sorted_lists(arr1, arr2):
    n = len(arr1)
    m = len(arr2)
    arr3 = []
    i, j = 0, 0
    while(i<n and j<m):
        if arr1[i]<arr2[j]:
            arr3.append(arr1[i])
            i+=1
        else:
            arr3.append(arr2[j])
            j+=1
        
    for k in range(i, n):
        arr3.append(arr1[k])
    for q in range(j, m):
        arr3.append(arr2[q])

    return arr3

arr1 = [10, 12]
arr2 = [5, 18, 20]
print(merge_two_sorted_lists(arr1,arr2))