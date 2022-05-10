#include<bits/stdc++.h>


int extractDigit(int n) {

	int totalSquareSum = 0;
	while(n > 0) {
		int rem = n % 10;
		totalSquareSum += rem * rem;
		n = n / 10;
	}
	return totalSquareSum;
}

bool checkHappiness(std::map<int, bool>isVisited, int n) {

	if(n == 1) {
		return true;
	}
	if(isVisited.find(n) != isVisited.end()) {
		return false;
	}
	isVisited.insert(std::make_pair(n, true));
	n = extractDigit(n);
	return checkHappiness(isVisited, n);
}


bool isOverHappy(int n) {

	std::map<int, bool>isVisited;
	return checkHappiness(isVisited, n);
}


int main() {

	int n;
	std::cin >> n;

	std::cout << isOverHappy(n) << '\n';


	return 0;
}