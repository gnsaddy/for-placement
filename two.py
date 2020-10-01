def ArrayChallenge(arr):
    arr = list(arr)
    print(arr)
    max = 0
    res = arr[0]
    for i in arr:
        freq = arr.count(i)
        if freq > max:
            max = freq
            res = i

    return res


print(ArrayChallenge(input()))
