int lengthOfLongestSubstring(char * s) {
    int lhs = 0, ans = 0;
    int ascii[128] = {0};
    int len = strlen(s);
    for (int rhs = 0; rhs < len; rhs++) {
        while (ascii[(int)s[rhs]]) {
            ascii[(int)s[lhs]]--;
            lhs++;
        }
        ascii[(int)s[rhs]]++;
        ans = (rhs - lhs + 1 > ans) ? (rhs - lhs + 1) : ans;
    }
    return ans;
}
