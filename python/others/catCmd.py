
with open('/home/addy/workspace/for-placement/python/others/f1.txt') as f:
    data = f.read()
    # print(data)
    for i in range(0, len(data), 300):
        print(data[i:i+300])
        input("Press Enter for more")

#  Read the file Sequentially
