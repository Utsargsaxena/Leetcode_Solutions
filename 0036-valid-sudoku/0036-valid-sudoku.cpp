class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string,bool> hashmap;
        for(int row = 0;row < 9;row++)
        {
            for(int column = 0;column < 9;column++)
            {            
                if(board[row][column] != '.')
                {
                    // Forming String sequences of each value in the array
                    string Row = "R" + to_string(row) + to_string(board[row][column]);
                    string Column = "C" + to_string(column) + to_string(board[row][column]);
                    int boxNumber = (row/3) * 3 + (column/3);
                    string Box = "B" + to_string(boxNumber) + to_string(board[row][column]);
                    
                    // If any of the string already exists the sudoku board is not valid
                    if(!hashmap.insert({ Row, true}).second || 
                       !hashmap.insert({ Column, true}).second || 
                       !hashmap.insert({ Box,true}).second)    
                        return false;
                }
            }
        }
        return true;
    }
};