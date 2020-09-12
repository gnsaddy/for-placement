# [ < expression > for < element > in < iterable > ]
# There's also an optional 'if' condition:
# [ < expression > for < element > in < iterable > if < condition > ]

squares = [x * x for x in (1, 2, 3, 4)]
print(squares)

# Get a list of uppercase characters from a string
s1 = [s.upper() for s in "Hello World"]
print(s1)

# Strip off any commas from the end of strings in a list
s2 = [w.strip(',') for w in ['these,', 'words,,', 'mostly', 'have,commas,']]
print(s2)


sentence = "Beautiful is better than ugly"
print(["".join(sorted(word, key=lambda x: x.lower()))
       for word in sentence.split()])


# When using if/else together use them before the loop
ae = [x if not x in 'aeiou' else '' for x in 'allahabad']
print(ae)
print(''.join(ae))
