#include<bits/stdc++.h>



void printPattern(int n, int j, std::string osf) {

	if(n == 0) {
		return;
	}

	osf = "";
	for(int i = 0; i <= j; i++) {
		osf += "* ";
	}
	std::cout << osf << '\n';
	printPattern(n - 1, j + 1, osf);
}

void printPatternTwo(int n, int j) {

	if(n == 0) {
		return;
	}

	if(j < n) {
		printPatternTwo(n, j + 1);
		std::cout << "* ";
	}
	else {
		std::cout << '\n';
		printPatternTwo(n - 1, 0);
	}
}

int main() {

	int n;
	std::cin >> n;
	printPattern(n, 0, "");
	std::cout << '\n';
	std::cout << "----------------\n";
	//printPatternTwo(n);

	return 0;
}