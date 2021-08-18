#include<bits/stdc++.h>


bool isSorted(int *arr, int n) {

	if(n == 1) {
		return true;
	}

	if(arr[0] < arr[1] && isSorted(arr + 1, n - 1))
		return true;
	else
		return false;
}

int main() {

	int n;
	std::cin >> n;

	int *arr = new int[n];
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	if(isSorted(arr, n)) {
		std::cout << "True\n";
	}
	else {
		std::cout << "False\n";
	}


	return 0;
}