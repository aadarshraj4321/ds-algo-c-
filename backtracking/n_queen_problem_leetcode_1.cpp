#include<bits/stdc++.h>

int board[100][100];

bool isPlace(int n, int row, int col) {
	for(int i = row - 1; i >= 0; i--) {
		if(board[i][col] == 1) return false;
	}

	for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
		if(board[i][j] == 1) return false;
	}

	for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
		if(board[i][j] == 1) return false;
	}

	return true;
}
int k = 0;
void nQueenSolver(int n, int row, std::vector<std::vector<int>>&arr) {
	if(row == n) {
		k++;
		// append the array;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				std::cout << board[i][j] << " ";
			}
			std::cout << '\n';
		}
		std::cout << '\n';
		// return 
		return;
	}

	for(int col = 0; col < n; col++) {
		if(isPlace(n, row, col)) {
			board[row][col] = 1;
			nQueenSolver(n, row + 1, arr);
			board[row][col] = 0;
		}
	}
	return;
}

void queenSol(int n, std::vector<std::vector<int>>&arr) {

	memset(board, 0, sizeof(int));
	return nQueenSolver(n, 0, arr);
}


int main(){

	int n;
	std::cin >> n;
	std::vector<std::vector<int>>arr;
	queenSol(n, arr);
	std::cout << '\n';
	std::cout << k << '\n';

	return 0;
}