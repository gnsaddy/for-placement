def countSet():
    query = input()
    query = int(query)

    while query:
        n = input()
        count = 0
        while int(n) > 0:
            if (int(n) & 1) > 0:
                count += 1
            n = int(n) >> 1
        print(count)
        query -= 1


if __name__ == "__main__":
    countSet()
