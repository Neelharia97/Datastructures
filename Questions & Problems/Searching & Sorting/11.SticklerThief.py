def find_max_loot(arr):
    i = 0
    j = i+2
    max_ = 0
    for i in range(len(arr)-3):
        if arr[i]+arr[j]>max_:
            max_ = arr[i]+arr[j]
    
    return max_

a = [5,5,10,100,10,5]
print(find_max_loot(a))

