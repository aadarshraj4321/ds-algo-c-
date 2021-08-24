#include<bits/stdc++.h>


void printNaturalNumbers(int n) {

	if(n == 0) {
		return;
	}
	printNaturalNumbers(n - 1);
	std::cout << n << '\n';
}


int binaryStringCount(int n) {

	if(n == 0) return 1;
	if(n == 1) return 2;

	return binaryStringCount(n - 1) + binaryStringCount(n - 2);

}

int main() {

	int n;
	std::cin >> n;
	printNaturalNumbers(n);
	std::cout << '\n';
	std::cout << binaryStringCount(n) << '\n';


	return 0;
}