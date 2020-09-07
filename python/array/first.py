from array import *

my_array = array('i', [1, 2, 3, 4, 5])
for i in my_array:
    print(i)

# append in an array

my_array = array('i', [1, 2, 3, 4, 5])
my_array.append(2)
print(my_array)

# insert
my_array = array('i', [1, 2, 3, 4, 5])
my_array.insert(0, 12)
print(my_array)

# extend array using extend method
my_array = array('i', [1, 2, 3, 4, 5])
my_extnd_array = array('i', [7, 8, 9, 10])
my_array.extend(my_extnd_array)
print(my_array)

# fromlist

my_array = array('i', [1, 2, 3, 4, 5])
c = [11, 12, 13]
my_array.fromlist(c)
print(my_array)

# removing
my_array = array('i', [1, 2, 3, 4, 5])
my_array.remove(4)
print(my_array)

# use index
my_array = array('i', [1, 2, 3, 4, 5])
print(my_array.index(5))

# reverse
my_array = array('i', [1, 2, 3, 4, 5])
my_array.reverse()
print(my_array)

# buffer_info
my_array = array('i', [1, 2, 3, 4, 5])
print(my_array.buffer_info())

# check occurence
my_array = array('i', [1, 2, 3, 3, 5])
print(my_array.count(3))

my_array = array('i', [1, 2, 3, 4, 5])
c = my_array.tolist()
print(c)
