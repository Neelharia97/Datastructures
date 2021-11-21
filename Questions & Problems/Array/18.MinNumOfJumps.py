def min_num_of_jumps(arr):
    max_reach = arr[0]
    steps_possible = arr[0]
    min_jumps = 1

    if len(arr) == 0 or len(arr) == 1:
        return 1
    if arr[0] == 0:
        return -1

    for i in range(1, len(arr)):
        if i == len(arr)-1:
            return min_jumps
        max_reach = max(max_reach, arr[i]+i)
        steps_possible -= 1
        if steps_possible == 0:
            min_jumps+=1
            if i>=max_reach:
                return -1
            steps_possible = arr[i]
        

arr = [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]
arr2 = [1, 4, 3, 2, 6, 7]
print(min_num_of_jumps(arr))
print(min_num_of_jumps(arr2))