

import os
f = open("./file1.txt", "r")
print(f.read())
print(f.read(200))
print(f.readline())
for x in f:
    print(x)
f.close()


f = open("./file2.txt", "a")
f.write("Now the file has more content!")
f.close()

# open and read the file after the appending:
f = open("./file2.txt", "r")
print(f.read())


f = open("./file2.txt", "a")
f.write("Woops! I have deleted the content!")
f.close()

# open and read the file after the appending:
f = open("./file2.txt", "r")
print(f.read())

# creating a new file
# f = open("./myfile.txt", "x")


if os.path.exists("./myfile.txt"):
    os.remove("./myfile.txt")
else:
    print("The file does not exist")
