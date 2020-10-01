def ArrayChallenge(arr):
    arr = arr.split(' ')
    n = len(arr)
    print(arr)
    add_arr = 0
    for i in range(n):
        add_arr += int(arr[i])

    dou_arr = add_arr * 2

    if n < 2:
        return "false"

    a = int(arr[0])
    b = int(arr[1])

    for i in range(0, n):
        for j in range(i+1, n):
            if (int(arr[i]*int(arr[j])) > a*b):
                a = int(arr[i])
                b = int(arr[j])

                pro = a*b

    if(pro < dou_arr):
        return "false"
    else:
        return "true"


print(ArrayChallenge(input()))
