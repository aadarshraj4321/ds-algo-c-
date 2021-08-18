#include<bits/stdc++.h>


int main() {

	int a = 10;
	std::cout << a << '\n';

	int *b = new int(2);
	std::cout << b << " " << *b << '\n';

	// array
	int *arr = new int[10]();
	for(int i = 0; i < 10; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << '\n';

//-----------------------------------------------------------------
	
	// 2d array
	int row = 5;
	int **array = new int*[row];
	for(int i = 0; i < row; i++) {
		array[i] = new int[5]();
	}

	for(int i = 0; i < row; i++) {
		for(int j = 0; j < row; j++) {
			std::cout << array[i][j] << " ";
		}
		std::cout << '\n';
	}
	std::cout << '\n';

	//-----------------------------------------------------------------

	int rows = 6;
	int **grid = new int*[rows];
	for(int i = 0; i < rows; i++) {
		grid[i] = new int[6]();
	}

	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < 6; j++) {
			std::cout << grid[i][j] << " ";
		}
		std::cout << '\n';
	}
	std::cout << '\n';

//-----------------------------------------------------------------

	// not use this system crash heap memory bad allocation
	// int *p;
	// for(int i = 0; i < 100000000; i++) {
	// 	p = new int[1000000];
	// }

//-----------------------------------------------------------------


	int *r = new int(nothrow)(10);
	if(!r) {
		std::cout << "Memory not allocated\n";
	}


	return 0;
}