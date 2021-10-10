def recursive_subset(a, w, n):
    if w == 0:
        return True
    if n == 0:
        return False
    
    if a[n-1]<= w:
        return recursive_subset(a, w-a[n-1], n-1) or recursive_subset(a, w, n-1)
    else:
        return recursive_subset(a, w, n-1)

def memoize_subset(a, w , n):
    if w  == 0:
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
    
    if a[n-1]<=w:
        t[n-1][w] = memoize_subset(a, w, n-1) or memoize_subset(a, w-a[n-1], n-1)
        return t[n-1][w]
    
    else:
        t[n-1][w] = memoize_subset(a, w, n-1)
        return t[n-1][w]


def Top_down_subset(a, w, n):
    # Initialization and Base Condition
    t = [[0]*(w+1) for i in range(n+1)]
    t[0][0] = True
    for i in range(1, len(t)):
        t[i][0] = True
    for j in range(1, len(t[0])):
        t[0][j] = False

    for i in range(n+1):
        for j in range(w+1):
            if a[i-1]<= w:
                t[i][j] = t[i-1][j] or t[i-1][j-a[i-1]]

            else:
                t[i][j] = t[i-1][j]

    return t[n][w]

if __name__ == "__main__":
    a = [1,2,3,4,5,6]
    w = 5
    n = len(a)
    print("Top Down: ", Top_down_subset(a,w,n))
    print("Recursive Solution: ", recursive_subset(a, w, n))
    print("Memoization: ", memoize_subset(a,w,n))