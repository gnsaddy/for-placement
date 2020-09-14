def palindrome(n):
    print(n)
    if n == n[::-1]:
        print("Palindrome")
    else:
        print("not a palindrome")

    rev = ''.join(reversed(n))
    if s == rev:
        print("Palindrome")
    else:
        print("not")


if __name__ == '__main__':
    s = "aabbaa"
    palindrome(s)
