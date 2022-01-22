#include<bits/stdc++.h>


int main() {

	int *ptr = new int;

	std::cout << ptr << '\n';
	std::cout << *(ptr) << '\n';

	*ptr = 25;

	std::cout << ptr << '\n';
	std::cout << *(ptr) << '\n';

	delete ptr;
	std::cout << "Delete The ptr" << '\n';

	//std::cout << *(ptr) << '\n';


	// initilize the array in heap
	// int n;
	// std::cin >> n;
	// int *arr = new int[n];
	int *arr = new int[2];
	arr[0] = 20;
	arr[1] = 25;

	std::cout << arr[0] << " " << arr[1] << '\n';

	delete [] arr;

	// initilize the whole array with zero
	int *arr1 = new int[3]();
	std::cout << arr1[0] << " " << arr1[1] << " " << arr[2] << '\n';



	// Create 2d array in heap
	std::cout << "Creating 2D Array In Heap" << '\n';

	int **arr2d = new int *[5];
	for(int i = 0; i < 5; i++) {
		arr2d[i] = new int[3];
	}

	std::cout << arr2d << '\n';
	std::cout << arr2d[0] << '\n';
	

	return 0;
}