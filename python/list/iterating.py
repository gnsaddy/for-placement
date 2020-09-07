my_list = ['foo', 'bar', 'baz']
for item in my_list:
    print(item)

for (index, item) in enumerate(my_list):
    print('The item in position {} is: {}'.format(index, item))


print('bar' in my_list)
print('happy' in my_list)

lst = [i for i in range(1, 5)]
lst.append(4)
print(lst)

x = any(i > 1 for i in lst)
print(x)


