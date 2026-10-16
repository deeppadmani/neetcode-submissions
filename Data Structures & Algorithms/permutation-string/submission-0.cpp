class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1count;
        for(char c : s1)
        {
            s1count[c]++;
        }

        int l = 0, r = s1.size()-1;
        while(r <= s2.size()-1)
        { 
            unordered_map<char, int> s2count;
            for(int i=l;i<=r;i++)
            {
                s2count[s2[i]]++;
            }
            if(s1count == s2count) return true;
            l++;
            r++;
        }
        return false;
    }
};
