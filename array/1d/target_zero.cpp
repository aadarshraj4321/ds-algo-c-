#include<bits/stdc++.h>

std::vector<int>targetZero(int n) {

	std::vector<int>finalResult;
	int n1 = std::floor(n / 2.0);
	for(int i = 1; i <= n1; i++) {
		finalResult.push_back(i);
		finalResult.push_back((-1 * i));
	}
	if(n % 2 == 1) {
		finalResult.push_back(0);
	}
	return finalResult;
}

int main() {

	int n;
	std::cin >> n;
	auto takeResult = targetZero(n);

	for(auto no: takeResult) {
		std::cout << no << " ";
	}

	return 0;
}