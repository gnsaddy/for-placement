def check():
    query = input()
    while int(query):
        num = input().split(" ")
        f = 1
        f = f << int(num[1])
        res = int(num[0]) & f

        if res == 0:
            print("False")
        else:
            print("True")
        query = int(query) - 1


if __name__ == "__main__":
    check()
