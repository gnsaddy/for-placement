def ways(n):
    dp = [0 for i in range(n+1)]

    for i in range(n+1):
        if i <= 2:
            dp[i] = i
        else:
            dp[i] = dp[i-1] + (i-1)*dp[i-2]

    return dp[n]


if __name__ == '__main__':
    cfriend = int(input())
    print(ways(cfriend))
