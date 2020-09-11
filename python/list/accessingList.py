lst = [i for i in range(1, 20)]
print(lst)

# # using index
# print(lst[0])
# print(lst[1])

# # negative index
# print(lst[-1])
# print(lst[-2])

# Lists allow to use slice notation as lst[start:end:step]

print(lst[1:])
print(lst[:3])
print(lst[::2])
print(lst[::-1])
print("->", lst[10::-1])


print(lst)
x = list(reversed(lst))
print(x)


print(lst)
print(lst[10::-1]+lst[11:])

lst = [i for i in range(1, 10)]
d = slice(0, 5)
print(lst[d])

# checking empty list or not

lst = []
if len(lst) == 0:
    print("Empty")

if not lst:
    print("Empty")
