#include<bits/stdc++.h>


int board[3][3];
int totalPaths = 0;

void ratMaze(int row, int col, int n, int m, std::string osf) {

	if(row == n - 1 && col == m - 1) {
		totalPaths++;
		std::cout << osf << '\n';
		return;
	}

	if(row >= n || col >= m || row < 0 || col < 0 || board[row][col] == 1) {
		return;
	} 

	board[row][col] = 1;
	ratMaze(row + 1, col, n, m, osf + "D");
	ratMaze(row, col + 1, n, m, osf + "R");
	ratMaze(row, col - 1, n, m, osf + "L");
	ratMaze(row - 1, col, n, m, osf + "U");
	// ratMaze(row + 1, col + 1, n, m, osf + "G"); 
	board[row][col] = 0;
}


int main() {

	ratMaze(0, 0, 3, 3, "");
	std::cout << "----------------\n";
	std::cout << totalPaths << '\n';

	return 0;
}