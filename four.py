def findSplitPoint(arr, n):
    leftSum = 0
    for i in range(0, n):
        leftSum += arr[i]
        rightSum = 0
        for j in range(i+1, n):
            rightSum += arr[j]
        if (leftSum == rightSum):
            return i+1
    return -1


def printTwoParts(arr, n):

    splitPo = findSplitPoint(arr, n)

    if (splitPo == -1 or splitPo == n):
        print("Not Possible")
        return

    for i in range(0, n):
        if(splitPo == i):
            print("")
        print(str(arr[i]) + ' ', end='')


arr = [1, 2, 3, 4, 5, 5]
n = len(arr)
printTwoParts(arr, n)
