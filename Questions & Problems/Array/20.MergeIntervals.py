def merge_intervals(arr):
    arr =sorted(arr)
    output = []
    if len(arr) == 0:
        return 
    
    for i in range(len(arr)):
        if len(output) == 0 or output[-1][1]<arr[i][0]:
            output.append(arr[i])
        else:
            output[-1][1] = max(output[-1][1], arr[i][1])
    return output

print(merge_intervals([[1,3],[2,6],[8,10],[15,18]]))