def min_operation(arr):
    answer = 0
    i,j = 0,len(arr)-1
    while(i<len(arr)-1 and j>=i):
        if arr[i] == arr[j]:
            i+=1
            j-=1
        
        if arr[i]<arr[j]:
            arr[i] += arr[i+1]
            arr.remove(arr[i+1])
            i+=2
            answer+=1
        else:
            arr[j] -= arr[j-1]
            arr.remove(arr[j-1])
            j -= 2
            answer+=1
    print(arr)
    return answer

arr = [1,4,5,1]
print(min_operation(arr))