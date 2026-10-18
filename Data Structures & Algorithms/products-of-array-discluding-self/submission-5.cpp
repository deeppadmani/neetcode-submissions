class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1, Zmul = 1,Zcount = 0;
        vector <int> res;
        for(int n:nums)
        {
            
            if(!n)
            { 
                mul = 0;
                Zmul *= 1;
                Zcount++;

            }else{
                mul *= n;
                Zmul *= n; 
            }
        }
        if(1 < Zcount)
        {
            for(int i = 0; i< nums.size();i++)
                res.push_back(0);
            return res;
        }
        cout << "Zcount : " <<Zcount << endl;
        for(int i = 0; i< nums.size();i++)
        {
            if(nums[i])
                res.push_back(mul/nums[i]);
            else
                res.push_back(Zmul);
        }
        return res;
    }
};
