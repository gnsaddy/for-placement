def removeKdigit(num, k):
    num = list(num)
    nl = []
    for i in range(0, len(num)):
        for j in range(0, len(num)-1):
            print(num[i], num[j+1])
            j = j+1


if __name__ == '__main__':
    num = "1432219"
    k = 3
    removeKdigit(num, k)
