#include<bits/stdc++.h>

std::vector<int>twoArraySum(std::vector<int>a, std::vector<int>b) {

	std::string s1;
	std::string s2;
	std::vector<int>arr;
	
	for(int i = 0; i < a.size(); i++) {
		s1.push_back(a[i]);
	}
	
	for(int i = 0; i < b.size(); i++) {
		s2.push_back(b[i]);
	}

	std::cout << s1 << " " << s2 << '\n';

	return arr;
}

int main() {

	std::vector<int>a = {1, 2, 3};
	std::vector<int>b = {9, 9};
	auto takeResult = twoArraySum(a, b);

	for(auto no: takeResult) {
		std::cout << no << " ";
	}
	std::cout << '\n';

	return 0;
}