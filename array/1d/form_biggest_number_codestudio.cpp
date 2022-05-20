#include<bits/stdc++.h>

bool comp(int a, int b) {

	std::string s1 = std::__cxx11::to_string(a);
	std::string s2= std::__cxx11::to_string(b);

	return (s1 + s2) > (s2 + s1);
}

std::string formTheBiggestNum(std::vector<int>arr) {

	std::sort(arr.begin(), arr.end(), comp);

	int isZero = 0;
	for(int i = 0; i < arr.size(); i++) {
		if(arr[i] != 0) {
			isZero = 1;
			break;
		}
	}

	if(isZero) {
		std::string s = "";
		for(int i = 0; i < arr.size(); i++) {
			s += std::__cxx11::to_string(arr[i]);
		}
		return s;
	}
	else {
		return "0";
	}
}


int main() {

	std::vector<int>arr = {6, 3, 1, 2, 6, 10};
	std::cout << formTheBiggestNum(arr) << '\n';

	return 0;
}