import itertools


def MathChallenge(num):
    item = str(num)
    for i in itertools.product('-+', repeat=len(item)-1):
        if test(item, i) == 0:
            return ''.join(i)
    return 'not possible'


def test(item, op):
    cache = int(item[0])
    for i, n in enumerate(item[1:]):
        if op[i] == '+':
            cache += int(n)
        else:
            cache -= int(n)
    return cache


print(MathChallenge(input()))
