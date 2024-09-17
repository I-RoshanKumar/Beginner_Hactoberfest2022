class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
		return true;
	}
	void solveSudoku(vector<vector<char> > &board) {
		util(board, 0);
	}
	bool util(vector<vector<char>>& board, int pos){
		if (pos >= 81)
			return true;
		int i = pos / 9;
		int j = pos % 9;
		if (board[i][j] != '.')
			return util(board, pos + 1);
		else{
			for (char c = '1'; c <= '9'; c++){
				if (!isInRow(board, i,c) && !isInCol(board, j, c) && !isInRec(board, i, j, c)){
					board[i][j] = c;
					if (util(board, pos + 1))
						return true;
					else
						board[i][j] = '.';
				}
			}
			return false;
		}
	}

	bool isInRow(vector<vector<char>>& board, int i, char c){
		vector<char>& row = board[i];
		for (int k = 0; k < 9; k++){
			if (row[k] == c)
				return true;
		}
		return false;
	}

	bool isInCol(vector<vector<char>>& board,int j, char c){
		for (int k = 0; k < 9; k++){
			if (board[k][j] == c)
				return true;
		}
		return false;
	}
	bool isInRec(vector<vector<char>>& board, int i, int j, char c){
		int bigrow = i / 3, bigcol = j / 3;
		for (int m = 3 * bigrow; m < 3 * (bigrow + 1); m++){
			for (int n = 3 * bigcol; n < 3 * (bigcol + 1); n++)
				if (board[m][n] == c)
					return true;
		}
		return false;
    }
};