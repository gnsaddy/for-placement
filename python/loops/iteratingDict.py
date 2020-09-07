d = {"a": 1, "b": 2, "c": 3}

print("keys")
for key in d:
    print(key)
print("keys")
for key in d.keys():
    print(key)
print("values")
for value in d.values():
    print(value)
print("key:values")
for key, value in d.items():
    print(key, "::", value)

# Looping and Unpacking
print("-------------------")
collection = [('a', 'b', 'c'), ('x', 'y', 'z'), ('1', '2', '3')]

for item in collection:
    i1 = item[0]
    i2 = item[1]
    i3 = item[2]
    # i1,i2,i3 = item

for i1, i2, i3 in collection:
    print(i1, i2, i3)

for item in collection:
    print(item)
