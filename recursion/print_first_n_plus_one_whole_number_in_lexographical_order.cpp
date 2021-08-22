#include<bits/stdc++.h>


void printLexoGraphicalOrder(int n, int i) {

	if(i > n) return;
	std::cout << i << '\n';
	for(int j = (i == 0) ? 1 : 0; j <= 9; j++) {
		printLexoGraphicalOrder(n, 10 * i + j);
	}
}

int main() {

	int n;
	std::cin >> n;
	printLexoGraphicalOrder(n, 0);

	return 0;
}