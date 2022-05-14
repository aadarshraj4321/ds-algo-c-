#include<bits/stdc++.h>

std::string longestPrefix(std::vector<std::string>vec) {

	if(vec.size() == 0) {
		return "";
	}

	std::string result = vec[0];
	for(int i = 1; i < vec.size(); i++) {
		std::string tempResult = "";
		for(int j = 0; j < std::min(vec[i].size(), result.size()); j++) {
			if(result[j] == vec[i][j]) {
				tempResult += result[j];
			}
			else {
				break;
			}
		}
		result = tempResult;
	}
	return result;
}

int main() {

	std::vector<std::string>vec = {"coding", "codezen", "codingninja", "coder"};
	std::string takeResult = longestPrefix(vec);
	std::cout << takeResult << '\n';

	return 0;
}