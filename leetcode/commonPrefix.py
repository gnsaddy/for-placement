class Solution:
    def longestCommonPrefix(self, strs) -> str:
        #         base case
        if len(strs) == 0:
            return " "

        res = ""
        strs = sorted(strs)
        print(strs)
        for i in strs[0]:
            if strs[-1].startswith(res+i):
                res += i
            else:
                break
        return res


if __name__ == "__main__":
    obj = Solution()
    st = ["flower", "flow", "flo", "floight"]
    print(obj.longestCommonPrefix(st))


'''
14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.

'''
