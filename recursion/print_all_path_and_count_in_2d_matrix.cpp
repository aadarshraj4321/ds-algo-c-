#include<bits/stdc++.h>


int totalPaths = 0;
void printAllPaths(int i, int j, int n, int m, std::string osf) {

	if(i == n - 1 && j == m - 1) {
		totalPaths += 1;
		std::cout << osf << '\n';
		return;
	}

	if(i >= n || j >= m)  {
		return;
	}

	printAllPaths(i + 1, j, n, m, osf + "D");
	printAllPaths(i, j + 1, n, m, osf + "R");
	printAllPaths(i + 1, j + 1, n, m, osf + "-D->");
}

int main() {

	int n, m;
	std::cin >> n >> m;

	std::vector<std::vector<int>>arr(n, std::vector<int>(m, 0));

	for(int i = 0; i < arr.size(); i++) {
		for(int j = 0; j < arr[0].size(); j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << '\n';
	}

	std::cout << '\n';
	std::cout << '\n';

	printAllPaths(0, 0, n, m, "");
	std::cout << '\n';
	std::cout << '\n';

	std::cout << "Total Paths : " << totalPaths << '\n';

	return 0;
}