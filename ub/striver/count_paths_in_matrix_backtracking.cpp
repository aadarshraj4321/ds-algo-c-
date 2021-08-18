#include<bits/stdc++.h>



std::vector<std::vector<int>>arr(3, std::vector<int>(3, 0));

int totalPathINMatrix(int row, int col, int n) {

	if(row == n - 1 && col == n - 1) {
		return 1;
	}

	if(row >= n || col >= n || arr[row][col] == 1) {
		return 0;
	}

	int right = totalPathINMatrix(row, col + 1, n);
	int down = totalPathINMatrix(row + 1, col, n);
	
	return right + down;
}


int main() {

	for(int i = 0; i < arr.size(); i++) {
		for(int j = 0; j < arr[0].size(); j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << '\n';
	}

	std::cout << totalPathINMatrix(0, 0, arr.size()) << '\n';
	return 0;
}