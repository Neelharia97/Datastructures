def topDown(coin_array, N):
    n = len(coin_array)
    dp = [[0 for i in range(N+1)] for j in range(n+1)]
    
    
    for i in range(n+1):
            for j in range(N+1):
                if j == 0:
                    dp[i][j] = 1
                elif i == 0:
                    print(i,j)
                    dp[i][j] = 0 
                elif coin_array[i-1] <= j:
                    dp[i][j] = dp[i][j-coin_array[i-1]] +  dp[i-1][j]
                else:
                    dp[i][j] = dp[i-1][j]
    return dp[-1][-1]




            

if __name__ == "__main__":
    coin = [1,2,3]
    N = 5
    print(topDown(coin, N))