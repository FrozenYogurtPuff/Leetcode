class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lhs = 0, ans = 0;
        unordered_map<char, int> umap;
        unordered_map<char, int>::iterator it;
        int len = s.length();
        for (int rhs = 0; rhs < len; rhs++) {
            if ((it = umap.find(s[rhs])) != umap.end()) {
                int lhsn = it->second + 1;
                for (int _ = lhs; _ < lhsn; _++)
                    umap.erase(s[_]);
                lhs = lhsn;
            }
            umap.insert(make_pair(s[rhs], rhs));
            ans = max(ans, rhs - lhs + 1);
        }
        return ans;
    }
};
