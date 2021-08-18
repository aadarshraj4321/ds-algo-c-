#include<bits/stdc++.h>
#define N 9

bool findEmptyLocation(int board[N][N], int &row, int &col) {
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(board[i][j] == 0) {
				row = i;
				col = j;
				return true;
			}
		}
	}
	return false;
}

bool isPlaceGrid(int board[N][N], int row, int col, int num) {
	
	int rowFactor = row - (row % 3);
	int colFactor = col - (col % 3);
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(board[i + rowFactor][j + colFactor] == num) {
				return false;
			}
		}
	}
	return true;
}


bool isPlaceCol(int board[N][N], int col, int num) {
	for(int i = 0; i < N; i++) {
		if(board[i][col] == num) {
			return false;
		}
	}
	return true;
}

bool isPlaceRow(int board[N][N], int row, int num) {
	for(int i = 0; i < N; i++) {
		if(board[row][i] == num) {
			return false;
		}
	}
	return true;
}

bool isPlace(int board[N][N], int row, int col, int num) {

	if(isPlaceGrid(board, row, col, num) && isPlaceRow(board, row, num) && isPlaceCol(board, col, num)) {
		return true;
	}
	return false;
}

bool solveSudoku(int board[N][N]) {

	int row, col;
	if(!findEmptyLocation(board, row, col)) {
		return true;
	}

	for(int i = 1; i <= N; i++) {
		if(isPlace(board, row, col, i)) {
			board[row][col] = i;
			if(solveSudoku(board)) {
				return true;
			}
			board[row][col] = 0;
		}
	}
	return false;
}


int main() {

	int board[N][N];
	for(int i = 0; i < N; i++) {
		std::string s;
		std::cin >> s;
		for(int j = 0; j < s.length(); j++) {
			board[i][j] = s[j] - '0';
		}
	}

	solveSudoku(board);

	/*
	
	020501090
    800203006
    030060070
    001000600
    540000019
    002000700
    090030080
    200804007
    010907060

	*/

	std::cout << '\n';
	std::cout << "-------------------\n";

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			std::cout << board[i][j] << " ";
		}
		std::cout << '\n';
	}

	return 0;
}