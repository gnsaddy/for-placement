a = [1, 2, 3, 4, 5]
a.append(123)
print(a)
a.append(53)
print(a)
b = ["str1", "str2"]
a.append(b)
print(a)

# Note that the append() method only appends one new element to
# the end of the list. If you append a list to another list,
# the list that you append becomes a single element at the end
# of the first list.

# extend(enumerable) – extends the list by appending elements
# from another enumerable.
a = [1, 2, 3, 4, 5, 6, 7, 7]
b = [8, 9, 10]
a.extend(b)
print(a)

# a.append(range(3))
# print(a)
# [1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 10, range(0, 3)]

a.extend(range(3))
print(a)

# index(value, [startIndex])
print(a.index(5))
print(a.index(7, 6))

# pop([index]) – removes and returns the item at index .
#  With no argument it removes and returns the last element of the list.
print(a.pop())
print(a)

print(a.pop(4))
print(a)


a.remove(0)
print(a)
a.remove(9)
print(a)
# a.remove(11)
# print(a)
# ValueError, because 10 is not in a

print(a.count(7))
a.sort()
print(a)
a.sort(reverse=True)
print(a)


x = list(range(10))
print(x)

print(x[2:6:2])

# del x[::2]
# print(x)
