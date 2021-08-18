#include<bits/stdc++.h>


void printPattern(int n, std::string osf) {

	if(n == 0) {
		return; 
	}
	osf = "";
	for(int i = 0; i < n; i++) {
		osf += "* ";
	}
	std::cout << osf << '\n';
	printPattern(n - 1, osf); 
}

void printPatternTwo(int n, int i) {

	if(n == 0) return;

	if(i < n) {
		std::cout << "* ";
		printPatternTwo(n, i + 1);
	}
	else {
		std::cout << '\n';
		printPatternTwo(n - 1, 0);
	}
}


int main() {

	int n;
	std::cin >> n;

	printPattern(n, "");
	std::cout << '\n';
	std::cout << "------------\n";
	printPatternTwo(n, 0);

	return 0;
}