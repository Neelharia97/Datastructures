def recursion(a, w, n):
    if w == 0:
        return 1
    if n == 0:
        return 0

    
    elif a[n-1]<=w:
        return recursion(a, w, n-1) + recursion(a, w-a[n-1], n-1)
    else:
        return recursion(a, w, n-1)

def memoization(a, w , n):
    if w == 0:
        return 1
    if n == 0:
        return 0


    t = [[0]*(w+1) for i in range(n+1)]
    t[0][0] = 1
    for i in range(1, len(t)):
        t[i][0] = 1
    for j in range(1, len(t[0])):
        t[0][j] = 0

    if t[n-1][w] != 0:
        return t[n-1][w]   

    if a[n-1]<=w:
        t[n-1][w] = memoization(a, w, n-1) + memoization(a, w-a[n-1], n-1)
        return t[n-1][w]
    else:
        t[n-1][w] = memoization(a, w, n-1)
        return t[n-1][w]


def topDown(a , w , n):
    t = [[0]*(w+1) for i in range(n+1)]

    
    for i in range(n+1):
        for j in range(w+1):
            if j == 0:
                t[i][j] = 1
            elif i == 0:
                t[i][j] = 0

            elif a[i-1] <= j:
                t[i][j] = t[i-1][j] + t[i-1][j -a[i-1]]
            else:
                t[i][j] = t[i-1][j]

    return t[n][w]


def count_subset(a, w):
    n = len(a)
    result_recursion = recursion(a, w, n)
    result_memoization = memoization(a, w , n)
    result_topDown = topDown(a, w, n)

    print("Recursion: ",result_recursion)
    print("Memoizaiton: ",result_memoization)
    print("Top Down: ",result_topDown)


if __name__ == "__main__":
    a = [2,3,5,6,8,10]
    w = 10
    print(recursion(a, w, len(a)))
    count_subset(a, w)