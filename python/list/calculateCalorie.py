def calc(n, k, x, y, lst):
    newLst = []

    if k == 1:
        newLst = lst

    for i in range(0, len(lst)-k+1):
        temp = lst[i]
        for j in range(1, k):
            newLst.append(lst[i+j]+temp)
    print(newLst)

    sm = 0
    temp = 0

    for i in range(0, len(newLst)):
        if x > newLst[i]:
            sm += -1
            print("x ", sm)
            temp = sm
            print("tx ", temp)
        elif y < newLst[i]:
            sm += 1
            print("y ", sm)
            temp = sm
            print("ty ", temp)
        elif x <= newLst[i] or y >= newLst[i]:
            sm += temp
            print("x,y ", sm)

    print(sm)


if __name__ == '__main__':
    lst = [9, 8, 7, 6, 5]
    calc(5, 2, 10, 20, lst)
