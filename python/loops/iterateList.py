lst1 = [2, 5, 9, 6, 9, 3, 8, 9, 7, 1]

for i, v in enumerate(lst1):
    # print(i, ":", v)
    if lst1.count(v) > 1:
        print(v)
        break;
for i in (lst1):
    print(i)
    if(i > 1):
        print("r:", i)

print("---------------")
for x in range(1, 6):
    print(x)

print("---------------")

lst2 = ["sun", "mon", "tue", "wed", "thu", "fri", "sat"]
for i, v in enumerate(lst2):
    # print(i, " : ", v)
    if v == "sat" or v == "sun":
        print(v, " : Its weekend")

print("---------------")
x = map(lambda e: e.title(), ['one', 'two', 'three', 'four'])
print(list(x))

print("---------------")

a = [1, 2, 3, 4]
for i in a:
    if type(i) is not int:
        print(i)
        break
else:
    print("no exception")

print("---------------")
