def countTriplets(arr, target):
    n = len(arr)
    arr.sort()
    final = 0
    for i in range(0, n-2):
        j = i+1
        k = n-1
        while(j<k):
            if arr[i]+arr[j]+arr[k]>=target:
                k -= 1
            else:
                final+=(k-j) # Every triplet behind k will be smaller than sum_
                j += 1
    return final

arr_ = [5, 1, 3, 4, 7]
sum_ = 12
print(countTriplets(arr_, sum_))