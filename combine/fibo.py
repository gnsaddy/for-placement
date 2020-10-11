def fibRec(n):

    if n == 0:
        return 0
    if n < 2:
        return 1

    return fibRec(n-1)+fibRec(n-2)


def fibDP(n):
    dp = []

    for i in range(n+1):
        if i <= 2:
            dp[i] = i
        else:
            dp[i] = dp[i-1] + dp[i-2]

    return dp[n]


if __name__ == "__main__":
    n = 5

    for i in range(0, n+1):
        print(fibRec(i+1), end=",")
