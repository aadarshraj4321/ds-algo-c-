#include<bits/stdc++.h>


int aPowerB(int a, int b) {

	if(b == 0) {
		return 1;
	}

	return a * aPowerB(a, b - 1);
}

int aPowerBIter(int a, int b) {

	int final = 1;
	for(int i = 1; i <= b; i++) {
		final += a * i;
	}

	return final;
}


int aPowerBRecBetter(int a, int b) {
	if(b == 0) return 1;
	if(b == 1) return a;

	int tmp = aPowerBRecBetter(a, b / 2);
	if(b % 2 == 0) {
		return tmp * tmp;
	}
	else {
		return a * tmp * tmp;
	}
}

int main() {

	int n;
	int m;
	std::cin >> n >> m;

	std::cout << aPowerB(n, m) << '\n';
	std::cout << aPowerB(n, m) << '\n';
	std::cout << aPowerBRecBetter(n, m) << '\n';

	return 0;
}