def recursion(length_arr, N, price):
    if N == 0 or len(len_arr) == 0 :
        return 0
    
    if length_arr[N-1]<=N:
        return max((price[N-1] + recursion(length_arr, N-length_arr[N-1], price)), recursion(length_arr, N-1, price))
    else:
        return recursion(length_arr, N-1, price)





def topDown(length_arr, N, price): 
    t = [[0]*(N+1) for k in range(N+1)]

    for i in range(1,N+1):
        for j in range(1,N+1):
            if length_arr[i-1]<=j:
                t[i][j] = max(price[i-1] + t[i][j-length_arr[i-1]], t[i-1][j])
            else:
                t[i][j] = t[i-1][j]

    return t[N][N]


            


if __name__ == "__main__":
    len_arr = [1,2,3,4,5,6,7,8]
    price = [1,5,8,9,10,17,17,20]
    N = 8
    print(topDown(len_arr, N, price))
    print(recursion(len_arr, N, price))