'''
You are given 3 coins of value 1, 3 and  5. You are also given a total which you have to arrive at.
Find the minimum number of coins to arrive at it.
'''
import math


def find_min_coins(c, sum):
    # Storing total number of available coins:
    size = len(c)

    # Declaring a 2-D list, filled with zeroes:
    arr = [[0] * (sum + 1) for x in range(size + 1)]

    # Initialising first column of list with 0
    # because a sum of 0 can be made with zero coins:
    for i in range(size + 1):
        arr[i][0] = 0

    # Initialising first row of list with +ve infinity
    # because a sum cannot be made with 0 coins:
    for j in range(sum + 1):
        arr[0][j] = math.inf

    # Using recursive solution:
    for i in range(1, size + 1):
        for j in range(1, sum + 1):
            if c[i - 1] > j:
                arr[i][j] = arr[i - 1][j]
            else:
                arr[i][j] = min(1 + arr[i][j - c[i - 1]], arr[i - 1][j])

    return arr[size][sum]


coins = [1, 3, 5]
s = 101
print("At least %s coins are required to make a sum of %s"
      % (find_min_coins(coins, s), s))
