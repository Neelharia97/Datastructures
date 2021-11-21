def findDuplicate(nums):
    m = {}
    duplicate = 0
    for i in nums:
        if i not in m:
            m[i] = 1
        else:
            m[i] += 1
    for j in m:
        if m[j]>1:
            duplicate = j
    return duplicate

arr = [1,3,3,5,6,7]
print(findDuplicate(arr))