'''
1. Two Sum
Easy

16643

600

Add to List

Share
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.


Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

'''
import sys


def twoSum(nums, target):
    hashMap = {}
    for i in range(0, len(nums)+1):
        temp = target-nums[i]
        if temp in hashMap:
            return [hashMap[temp], i]
        hashMap[nums[i]] = i


if __name__ == '__main__':
    lst = sys.stdin.readline().split()
    lst = list(map(int, lst))
    t = sys.stdin.readline()
    print(twoSum(list(lst), int(t)))
