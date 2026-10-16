class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;
        unordered_set<char> charSet(s.begin(), s.end());

        for (char c : charSet) {
            int count = 0, l = 0;
            for(int i = 0; i< s.size();i++) {
                if (s[i] == c) {
                    count++;
                }
                while ((i - l + 1) - count > k) {
                    if (s[l] == c) {
                        count--;
                    }
                    l++;
                }
                res = max(res, i - l + 1);
            }
        }
        return res;
    }
};