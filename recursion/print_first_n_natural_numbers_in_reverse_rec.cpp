#include<bits/stdc++.h>


void printNRev(int n) {

	if(n == 0) {
		return;
	}

	std::cout << n << '\n';
	printNRev(n - 1);
}


void printNRecFor(int n) {

	if(n == 1) {
		std::cout << 1 << '\n';
		return;
	}

	std::cout << n << '\n';
	printNRecFor(n - 1);
	std::cout << n << '\n';
}


int main() {

	int n;
	std::cin >> n;
	printNRev(n);
	std::cout << '\n';
	std::cout << '\n';
	printNRecFor(n);

	return 0;
}