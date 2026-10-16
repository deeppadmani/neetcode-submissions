class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> duplicates;

        for(int n :nums)
        {
            duplicates[n]++;
        }
        
        for(auto d : duplicates)
        {
            if(d.second > 1)
                return d.first;
        }
        return 0;
    }
};
