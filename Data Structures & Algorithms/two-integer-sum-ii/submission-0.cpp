class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sidx = 0;
        int eidx = numbers.size()-1;
        while(sidx != eidx)
        {
            int sum = numbers[sidx] + numbers[eidx];
            if(sum == target)
                return {sidx+1, eidx+1};
            else if(sum > target)
            {
                eidx--;
            }
            else if(sum < target)
            {
                sidx++;
            }
        }
        return {};
    }
};
