'''
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:
Input: 123
Output: 321

Example 2:
Input: -123
Output: -321

Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed
integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the 
reversed integer overflows.
 '''
import sys


def reverse(x: int) -> int:
    # ans = int(str(x)[::-1]) if x >= 0 else -int(str(-x)[::-1])
    # return ans if -2**31 <= ans <= 2**31 - 1 else 0

    if x >= 0:
        answer = int(str(x)[::-1])
    else:
        answer = -int(str(-x)[::-1])
    if -2**31 <= answer <= 2**31 - 1:
        return answer
    else:
        return 0


if __name__ == '__main__':
    val = sys.stdin.readline().split()
    for i in val:
        print(reverse(int(i)))
