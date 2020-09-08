# You can use the reversed function which returns an iterator to the reversed list:

num = [i for i in range(0, 13)]
rev = reversed(num)
print(list(rev))

for i in reversed(num):
    print(i, end=', ')
print()
# Using list comprehension
[print(i, end=', ') for i in reversed(num)]
print()
print(num[::-1])
