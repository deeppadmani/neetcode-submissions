class Solution {
public:
    void print(string s ,vector<int>& v)
    {
        cout << s << ": ";
        for(int n: v)
        {
            cout << n << " ";
        }
        cout << endl;
    }

    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) {
            return 0;
        }

        vector<int> leftMax(n);
        vector<int> rightMax(n);

        leftMax[0] = height[0];
        print("leftMax",leftMax);
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }
        print("leftMax",leftMax);
        rightMax[n - 1] = height[n - 1];
        print("rightMax",rightMax);
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }
        print("rightMax",rightMax);
        int res = 0;
        for (int i = 0; i < n; i++) {
            res += min(leftMax[i], rightMax[i]) - height[i];
        }
        return res;
    }
};


/*
2 
*/