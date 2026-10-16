class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> res;

        vector<int>::iterator left = nums.begin();
        vector<int>::iterator right = nums.begin() + k;
        
        while(right <= nums.end())
        {
            res.push_back(*max_element(left, right));
            left += 1;
            right += 1;
        }
        return res;
    }
};
