def three_way_partition(arr, a, b):
    prefix = []
    middle = []
    suffix = []
    output = []
    for i in arr:
        if i<a:
            prefix.append(i)
        if i>=a and i<=b:
            middle.append(i)
        else:
            suffix.append(i)
    if len(prefix)>0:    
        for i in prefix:
            output.append(i)
    if len(middle)>0:
        for j in middle:
            output.append(j)
    if len(suffix)>0:
        for k in suffix:
            output.append(k)
    return output
arr = [1, 2, 3, 3, 4]
print(three_way_partition(arr,1,2))