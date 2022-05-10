#include<bits/stdc++.h>

int squareRoot(int k) {

	std::vector<int>arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for(int i = 0; i < arr.size(); i++) {
		arr[i] = arr[i] * arr[i];
	}

	if(k <= 9) {
		return arr[k];
	}
	else {
		return -1;
	}
}


bool isHappyNumber(int num) {

	std::vector<char>isCircular = {'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f'};
	int rem;
	int sumSquare = 0;
	while(sumSquare != 1) {
		if(sumSquare > 0) {
			num = sumSquare;
			sumSquare = 0;
		}
		while(num != 0) {
			rem = num % 10;
			sumSquare += squareRoot(rem);
			num = num / 10;
		}
		// std::cout << sumSquare;
		// std::cout << '\n';
	}

	return true;
}

int main() {

	int n;
	std::cin >> n;

	if(isHappyNumber(n)) {
		std::cout << "True\n";
	}
	else {
		std::cout << "False\n";
	}

	return 0;
}
