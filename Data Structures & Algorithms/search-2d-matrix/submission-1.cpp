class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int targetRow = 0;
        int rows = matrix.size();
        int cols = matrix[0].size(); 
        
        while(targetRow < rows)
        {
            cout << targetRow  << cols-1  << "  matrix[targetRow][cols-1] :" << matrix[targetRow][cols-1] <<"   matrix[targetRow][0] : " << matrix[targetRow][0] <<endl;
            if(matrix[targetRow][0] <= target &&  matrix[targetRow][cols-1] >= target)
                break;
            targetRow++;
        }
        cout << "targetRow : " << targetRow <<endl;

        if(targetRow >= rows)
            return false;
        
        int l = 0;
        int r = cols;

        while(l <= r)
        {
            int m = (l + r) / 2;
            if(target > matrix[targetRow][m])
                l = m + 1;
            else if(target < matrix[targetRow][m])
                r = m-1;
            else 
                return true;

        }
        return false;
    }
};
