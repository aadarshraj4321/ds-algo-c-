#include<bits/stdc++.h>



int totalBinaryStrings(int n) {

	if(n == 0) {
		return 1;
	}

	if(n == 1) {
		return 2;
	}

	return totalBinaryStrings(n - 1) + totalBinaryStrings(n - 2);
}


int main() {

	int n;
	std::cin >> n;
	std::cout << totalBinaryStrings(n) << '\n';

	return 0;
}