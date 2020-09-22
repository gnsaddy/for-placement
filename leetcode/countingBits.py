def countBits(n: int):
    lst = []

    for i in range(0, n+1):
        count = 0
        x = i
        while (x > 0):
            if (x & 1) > 0:
                count += 1
            x = x >> 1
        lst.append(count)
    return lst


if __name__ == "__main__":
    n = input()
    ret = countBits(int(n))
    print(ret)
