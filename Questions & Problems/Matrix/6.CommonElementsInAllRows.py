def common_elements(arr, m , n):
    mapper = dict()
    output = []
    final_result = []
    for i in range(m):
        output.append(set(arr[i]))
    
    for i in output:
        for j in i:
            if j not in mapper:
                mapper[j] = 1
            else:
                mapper[j] += 1
    for i in mapper:
       if mapper[i] == len(arr):
           final_result.append(i)
    return final_result
    
a = [[1, 2, 1, 4, 8],
     [3, 7, 8, 5, 1],
     [8, 7, 7, 3, 1],
     [8, 1, 2, 7, 9]]
print(common_elements(a, len(a), len(a[0])))