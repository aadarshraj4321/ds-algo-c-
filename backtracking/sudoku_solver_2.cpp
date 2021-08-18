#include<bits/stdc++.h>

#define N 9

bool findEmptyLocation(int grid[N][N], int &row, int &col) {

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(grid[i][j] == 0) {
				row = i;
				col = j;
				return true;
			}
		}
	}
	return false;
}

bool isPlaceRow(int grid[N][N], int row, int num) {
	for(int i = 0; i < N; i++) {
		if(grid[row][i] == num) {
			return false;
		}
	}
	return true;
}

bool isPlaceCol(int grid[N][N], int col, int num) {
	for(int i = 0; i < N; i++) {
		if(grid[i][col] == num) {
			return false;
		}
	}
	return true;
}

bool isPlaceGrid(int grid[N][N], int row, int col, int num) {
	int rowFact = row - (row % 3);
	int colFact = col - (col % 3);

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(grid[i + rowFact][j + colFact] == num) {
				return false;
			}
		}
	}
	return true;
}

bool isPlace(int grid[N][N], int row, int col, int num) {

	if(isPlaceRow(grid, row, num) && isPlaceCol(grid, col, num) && isPlaceGrid(grid, row, col, num)) {
		return true;
	}
	return false;
}


bool sodokuSolver(int grid[N][N]) {

	int row, col;
	if(!findEmptyLocation(grid, row, col)) {
		return true;
	}

	for(int i = 1; i <= N; i++) {
		if(isPlace(grid, row, col, i)) {
			grid[row][col] = i;
			if(sodokuSolver(grid)) {
				return true;
			}
			grid[row][col] = 0;
		}
	}
	return false;
}




int main() {

	int grid[N][N];
	for(int i = 0; i < N; i++) {
		std::string s;
		std::cin >> s;
		for(int j = 0; j < s.length(); j++) {
			grid[i][j] = s[j] - '0';
		}
	}

	sodokuSolver(grid);
	std::cout << '\n';
	std::cout << "------------------------\n";

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			std::cout << grid[i][j] << std::setw(2);
		}
		std::cout << '\n';
	}

	return 0;
}