class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        length = len(s)
        lhs = 0
        ans = 0
        ss = set()
        for rhs in range(length):
            while s[rhs] in ss:
                ss.remove(s[lhs])
                lhs = lhs + 1
            ss.add(s[rhs])
            ans = max(ans, rhs - lhs + 1)
        return ans