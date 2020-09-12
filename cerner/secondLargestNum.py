def sln(n,k):
    print(n)
    n.sort()
    print(n)
    print(n[-k])


if __name__ == '__main__':
    n = [2, 8, 6, 4, 11, 66, 34, 87, 12, 9, 77, 99]
    sln(n,2)
