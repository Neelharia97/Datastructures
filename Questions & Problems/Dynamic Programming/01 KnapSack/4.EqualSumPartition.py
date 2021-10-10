def recursion(a, w, n):
    if w == 0:
        return True
    if n == 0:
        return False

    if a[n-1]<=w:
        return recursion(a, w, n-1) or recursion(a, w-a[n-1], n-1)
    else:
        return recursion(a, w, n-1)


def memoization(a, w, n):
    if w == 0:
        return True
    if n == 0:
        return False

    t = [[0]*(w+1) for i in range(n+1)]
    t[0][0] = True
    for i in range(1, len(t)):
        t[i][0] = True
    for j in range(1, len(t[0])):
        t[0][j] = False

    if t[n-1][w] != False:
        return t[n-1][w]
    if a[n-1]<= w:
        t[n-1][w] = memoization(a, w, n-1) or memoization(a, w-a[n-1], n-1)
        return t[n-1][w]
    else:
        t[n-1][w] = memoization(a, w, n-1)
        return t[n-1][w]
    
def topDown(a, w, n):
    t = [[0]*(w+1) for i in range(n+1)]
    t[0][0] = True
    for i in range(1, len(t)):
        t[i][0] = True
    for j in range(1, len(t[0])):
        t[0][j] = False

    for i in range(n+1):
        for j in range(w+1):
            if a[i-1]<=j:
                t[i][j] = t[i-1][j-a[i-1]] or t[i-1][j]
            else:
                t[i][j] = t[i-1][j]
    return t[n][w]

def equalSumPartition(a):
    n = len(a)
    sum_ = sum(a)
    if sum_ % 2 != 0:
        return False
    else:
        agg = sum_//2
    
    recursion_result = recursion(a, agg, n)
    memoize_result = memoization(a, agg, n)
    topDown_result = topDown(a, agg, n)

    print("Recursion: ",recursion_result)
    print("Memoization: ", memoize_result)
    print("Top Down: ", topDown_result)


if __name__ == "__main__":
    a = [1,5,11,5]
    w = 11
    equalSumPartition(a)