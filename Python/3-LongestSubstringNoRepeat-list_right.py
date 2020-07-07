class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        length = len(s)
        lhs = 0
        ans = 0
        ss = [False] * 128
        for rhs in range(length):
            while ss[ord(s[rhs])]:
                ss[ord(s[lhs])] = False
                lhs = lhs + 1
            ss[ord(s[rhs])] = True
            ans = max(ans, rhs - lhs + 1)
        return ans
