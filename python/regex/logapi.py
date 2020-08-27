import re


def getcloumn(n, filename, where=None):

    if(n != '*' and where == None):
        data = tuple(map(lambda i: i.split(), open(
            filename).read().splitlines()))
        for i in data:
            print(i[int(n)])
    elif(n == '*' and where == None):
        data = tuple(open(filename).read().splitlines())
        for i in data:
            print(i)
    elif(where != None):
        data = tuple(map(lambda i: i.split(), open(
            filename).read().splitlines()))
        for i in data:
            if(i[int(where[0])] == where[1] and n == '*'):
                print(' '.join(i))
            elif(i[int(where[0])] == where[1] and n != '*'):
                print(i[int(n)])


if __name__ == "__main__":
    pyin = int(input())

    for i in range(pyin):
        genin = input().split()
        if(genin[0] == "SELECT"):
            if(len(genin) == 4):
                if(genin[2] == 'FROM' and genin[3] != '' or genin[3] != "WHERE"):
                    getcloumn(genin[1], genin[3])
            elif(len(genin) == 6):
                if(genin[2] == 'FROM' and genin[4] == "WHERE" and genin[5] != ''):
                    tem = genin[5].split("=")
                    if(len(tem) == 2):
                        getcloumn(genin[1], genin[3], tem)


# x = [0, 1, 2]
# y = ''.join(map(str, x))
# z = int(y)
