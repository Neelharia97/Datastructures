def merge_intervals(arr):
    first_element = arr[0][0]
    last_element = arr[0][1]
    output = []
    for i in range(1, len(arr)-1):
        if arr[i][0]<last_element:
            last_element = arr[i][1]
            output.append([first_element, last_element])
        first_element = arr[i+1][0]
        output.append(arr[i+1])   
    print(output)