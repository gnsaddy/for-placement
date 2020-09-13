def rvol(s1):
    s1 = str(s1)
    ''' a e i o u '''
    for i in s1:
        if i in 'aeiouAEIOU':
            s1 = s1.replace(i, '')
    print(s1)


if __name__ == '__main__':
    s1 = "allahabad"
    rvol(str(s1))


# When using if/else together use them before the loop
ae = [x if not x in 'aeiou' else '' for x in 'allahabad']

print(''.join(ae))
