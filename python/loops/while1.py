import sys


def testWhile(n):
    print("--> ", n)
    i = 0
    while i < n:
        print(i)
        if i == 4:
            print("Breaking from the loop")
            break
        i += 1


if __name__ == '__main__':
    s = sys.stdin.readline().split()
    for i in s:
        testWhile(int(i))
