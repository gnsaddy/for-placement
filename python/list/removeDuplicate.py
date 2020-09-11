
import collections
names = ["aixk", "duke", "edik", "tofp", "duke"]
print(list(set(names)))
# Note that by converting a list to a set the original ordering is lost.

# To preserve the order of the list one can use an OrderedDict
names = ["aixk", "duke", "edik", "tofp", "duke"]
l1 = collections.OrderedDict.fromkeys(names).keys()
print(list(l1))


# Section 20.12: Accessing values in nested list
# Starting with a three-dimensional list:

alist = [[[1, 2], [3, 4]], [[5, 6, 7], [8, 9, 10], [12, 13, 14]]]
# Accessing items in the list:

print(alist[0][0][1])
# 2
# Accesses second element in the first list in the first list
print(alist[1][1][2])
# 10
# Accesses the third element in the second list in the second list
# Performing support operations:

alist[0][0].append(11)
print(alist[0][0][2])
# 11
# Appends 11 to the end of the first list in the first list

# loop
for row in alist:  # One way to loop through nested lists
    for col in row:
        print(col)
# Note that this operation can be used in a list comprehension or even as
#  a generator to produce efficiencies, e.g:

print([col for row in alist for col in row])
#[[1, 2, 11], [3, 4], [5, 6, 7], [8, 9, 10], [12, 13, 14]]


for row in range(len(alist)):
    for col in range(len(alist[row])):
        print(alist[row][col])
