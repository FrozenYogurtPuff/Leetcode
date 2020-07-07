class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int rhs = -1, ans = 0;
        unordered_set<char> uset;
        int len = s.length();
        for (int lhs = 0; lhs < len; lhs++) {
            if (lhs != 0)
                uset.erase(s[lhs - 1]);
            while (rhs + 1 < len && !uset.count(s[rhs + 1]))
                uset.insert(s[++rhs]);
            ans = max(ans, rhs - lhs + 1);
        }
        return ans;
    }
};
