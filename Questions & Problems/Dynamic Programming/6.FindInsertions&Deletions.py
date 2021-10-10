def dpLCS(a, b):
    m = len(a)
    n = len(b)

    t = [[None]*(n+1) for i in range(m+1)]

    for i in range(m+1):
        for j in range(n+1):
            if i == 0 or j == 0:
                t[i][j] = 0
            
            elif a[i-1] == b[j-1]:
                t[i][j] = t[i-1][j-1] + 1 

            else:
                t[i][j] = max(t[i-1][j], t[i][j-1])
    
    return t[m][n]



def findInsertions(a, b):
    n = len(a)
    m = len(b)
    insertions = 0
    deletions = 0
   
    insertions = m - dpLCS(a, b)
    deletions = n - dpLCS(a,b)
    
    return insertions, deletions


a = "peace"
b = "ice"
print(findInsertions(a, b))

