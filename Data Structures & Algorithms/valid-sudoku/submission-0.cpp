class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        int sizeofSudoku = 9;
        for(int row = 0 ; row < sizeofSudoku ; row++)
        {
            unordered_set<char> check_row;
            unordered_set<char> check_col;
            for(int col = 0 ; col < sizeofSudoku ; col++)
            {
                if('.' != board[row][col])
                {
                    if(check_row.find(board[row][col]) != check_row.end())
                        return false;
                    else
                        check_row.insert(board[row][col]);
                }
                if('.' != board[col][row])
                {
                    if(check_col.find(board[col][row]) != check_col.end())
                        return false;
                    else
                        check_col.insert(board[col][row]);
                }
            }
            
        }


        for(int row = 0 ; row < sizeofSudoku ; row+=3)
        {
            
            for(int col = 0 ; col < sizeofSudoku ; col+=3)
            {
                unordered_set<char> check_box;
                for(int i = 0; i < 3; i++) 
                {
                    for(int j = 0; j < 3; j++) 
                    {
                        char current = board[row + i][col + j];
                        if(current == '.') continue;

                        if(check_box.find(current) != check_box.end()) 
                        {
                            return false;
                        }
                        check_box.insert(current);
                    }
                }
            }
        }
        return true;
    }
};
