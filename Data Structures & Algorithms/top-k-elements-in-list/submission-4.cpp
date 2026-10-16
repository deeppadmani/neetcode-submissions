class Solution {
public:
    bool comp(pair<int, int>& a, pair<int, int>& b) {
        return a.second < b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i = 0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> v;
        for (const auto& p : mp) {
            v.push_back({p.second, p.first});
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < k; ++i) {
            ans.push_back(v[i].second);
        }
        return ans;
        
    }
};
