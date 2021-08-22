#include<bits/stdc++.h>


void printAllCell(int n, int i, std::string osf) {

	if(i >= n) {
		return;
	}

	if(i == n - 1) {
		std::cout << osf << "\n";
		return;
	}


	// printAllCell(n, i + 1, osf + "1");
	// printAllCell(n, i + 2, osf + "2");
	// printAllCell(n, i + 3, osf + "3");
	// printAllCell(n, i + 4, osf + "4");
	// printAllCell(n, i + 5, osf + "5");
	// printAllCell(n, i + 6, osf + "6");

	for(int j = 1; j <= 6; j++) {
		printAllCell(n, i + j, osf + "-->" + std::to_string(j));
	}
}



int main() {
	
	int n;
	std::cin >> n;

	printAllCell(n, 0, "");

	return 0;
}