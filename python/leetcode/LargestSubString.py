CHAR_RANGE = 256

def SearchingChallenge(strParam):
  k = strParam[0]
  strParam = strParam.replace(k, '')
  e = b = 0

  take = set()
  cache = [0]*CHAR_RANGE
  l = h = 0

  while h < len(strParam):

    take.add(strParam[h])

    cache[ord(strParam[h])] = cache[ord(strParam[h])]+1

    while len(take) > int(k):
      cache[ord(strParam[l])] = cache[ord(strParam[l])]-1

      if cache[ord(strParam[l])] == 0:
        take.remove(strParam[l])

      l = l+1

    if e-b < h-l:
      e = h
      b = l

    h = h+1

  return strParam[b:e+1]

# keep this function call here
print(SearchingChallenge(input()))
