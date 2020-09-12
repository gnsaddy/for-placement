import sys

def reversDigits(num):
    rev_num = str(num)[::-1]
    return int(rev_num)


def isPlaindrome(n):
    return (reversDigits(n) == n)


def addReturn(n):
    maxInt = sys.maxsize
    revNum = 0

    while n <= maxInt:
        revNum = reversDigits(n)
        n = n + revNum

        if(isPlaindrome(n)):
            return n
            break
        else:
            if(n > maxInt):
                return "No palindrome exist"


if __name__ == '__main__':
    n = 111
    print(addReturn(n))
