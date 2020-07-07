class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lhs = 0, ans = 0;
        unordered_set<char> uset;
        int len = s.length();
        for (int rhs = 0; rhs < len; rhs++) {
            while (uset.count(s[rhs])) {
                uset.erase(s[lhs]);
                lhs++;
            }
            uset.insert(s[rhs]);
            ans = max(ans, rhs - lhs + 1);
        }
        return ans;
    }
};
