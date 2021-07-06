def findPair(arr, target):
    arr = sorted(arr)
    i,j = 0, 1
    while(i<len(arr) and j<len(arr)):
        sum_ = abs(arr[i]-arr[j])
        print(sum_)
        if sum_ == target:
            return(arr[i], arr[j])
            
        if sum_<target:
            j+=1
        else:
            i += 1
    return -1    

if __name__ == "__main__":
    arr = [1, 8, 30, 40, 100]
    target = 60
    print(findPair(arr, target))