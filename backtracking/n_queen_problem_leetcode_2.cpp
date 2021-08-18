class Solution {
public:
    
    bool isPlace(int n, int row, int col, std::vector<string>&tmpSol) {
        for(int i = row - 1; i >= 0; i--) {
            if(tmpSol[i][col] == 'Q') return false;
        }
        
        for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if(tmpSol[i][j] == 'Q') return false;
        }
        
        for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if(tmpSol[i][j] == 'Q') return false;
        }
        return true;
    }
    
    
    void nQueenSolver(int n, int row, std::vector<std::vector<string>>&ans, std::vector<string>&tmpSol) {
        
        if(row == n) {
            ans.push_back(tmpSol);
            return;   
        }
        
        for(int j = 0; j < n; j++) {
            if(isPlace(n, row, j, tmpSol)) {
                tmpSol[row][j] = 'Q';
                nQueenSolver(n, row + 1, ans, tmpSol);
                tmpSol[row][j] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        std::vector<std::vector<string>>ans;
        std::vector<string>tmpSol;
        
        string s = "";
        for(int i = 0; i < n; i++)
            s += ".";
        
        for(int i = 0; i < n; i++) 
            tmpSol.push_back(s);
        
        
        nQueenSolver(n, 0, ans, tmpSol);
        return ans;
    }
};