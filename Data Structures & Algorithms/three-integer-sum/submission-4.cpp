class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        
        for(vector<int>::iterator sidx = nums.begin(); sidx != nums.end() - 2; sidx++) {
            // Skip duplicates for first number
            if(sidx > nums.begin() && *sidx == *(sidx-1)) continue;
            
            vector<int>::iterator eidx = sidx + 1;
            
            while(eidx != nums.end() - 1) {
                // Check for target value after eidx
                int target = -(*sidx + *eidx);
                auto idx = find(eidx + 1, nums.end(), target);
                
                if(idx != nums.end()) {
                    vector<int> triplet = {*sidx, *eidx, *idx};
                    // Only add if it's not already in ans
                    if(find(ans.begin(), ans.end(), triplet) == ans.end()) {
                        ans.push_back(triplet);
                    }
                }
                eidx++;
                // Skip duplicates for second number
                while(eidx != nums.end() - 1 && *eidx == *(eidx-1)) eidx++;
            }
        }
        return ans;
    }
};