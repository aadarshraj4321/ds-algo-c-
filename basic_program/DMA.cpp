#include<bits/stdc++.h>

int main() {
	
	// Create a bucket of integer in heap

	int *ptr = new int(8);
	std::cout << ptr << " " << *ptr << '\n';
	
	// Create an array of integer in heap
	int *arr = new int[10];

	// init an array with all zeroes
	int *zeroes = new int[10]();

	for(int i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << '\n';

	for(int i = 0; i < 10; i++) {
		std::cout << zeroes[i] << " ";
	}

	std::cout << '\n';

	// Create 2D array in heap
	int rows, cols;
	std::cin >> rows >> cols;
	int **grid = new int*[rows];
	for(int i = 0; i < rows; i++) {
		if(i == 0) {
			grid[i] = new int[1]();
		}
		else {
			grid[i] = new int[cols]();
		}
	}

	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < ((i == 0) ? 1: cols); j++) {
			std::cout << grid[i][j] << " ";
		}
		std::cout << '\n';
	}

	std::cout << '\n';


	// Crashed the comuter with this code
	// int *p;
	// for(int i = 0; i < 1000000000; i++) {
	// 	p = new int[1000000];
	// }

	














	return 0;
}