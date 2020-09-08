# Concatenate and Merge lists

l1 = [i for i in range(0, 11)]
l2 = [i for i in range(16, 26)]

print(l1)
print(l2)
merged = l1+l2
print(merged)


# zip returns a list of tuples, where the i-th tuple
# contains the i-th element from each of the argument
# sequences or iterables:

for a, b in zip(l1, l2):
    print(a, b)

l1 = [i for i in range(0, 5)]
l2 = [i for i in range(16, 26)]


print(l1)
print(l2)

for a, b in zip(l1, l2):
    print(a, b)

# If the lists have different lengths then the result
#  will include only as many elements as the shortest one:


# For padding lists of unequal length to the longest one
# with None s use itertools.zip_longest
