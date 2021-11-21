def find_median(arr):
    arr =sorted(arr)
    if len(arr)%2 == 0:
        m = int(len(arr)/2-1)        
        n = m+1
        return (arr[n]+arr[m])//2
    else:
        m = len(arr)//2 
        return arr[m]

print(find_median([56,67,30,79]))