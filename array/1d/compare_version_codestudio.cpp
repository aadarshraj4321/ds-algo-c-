#include<bits/stdc++.h>

int comapreVersion(std::string versionOne, std::string versionTwo) {

	int i = 0;
	int j = 0;

	int oneLength = versionOne.length();
	int twoLength = versionTwo.length();

	while(i < oneLength || j < twoLength) {
		int numOne = 0;
		int numTwo = 0;
		while(i < oneLength && versionOne[i] != '.') {
			int tmp = versionOne[i] - '0';
			numOne = numOne * 10 + tmp;
			i++;
		}

		while(j < twoLength && versionTwo[j] != '.') {
			int tmp = versionTwo[j] - '0';
			numTwo = numTwo * 10 + tmp;
			j++;
		}

		if(numOne > numTwo) {
			return 1;
		}
		else if(numTwo > numOne) {
			return -1;
		}
		else {
			i++;
			j++;
		}
	}
	return 0;
}

int main() {

	std::string versionOne = "2.3.5.1";
	std::string versionTwo = "2.3.5";
	std::cout << comapreVersion(versionOne, versionTwo) << '\n';

	return 0;
}