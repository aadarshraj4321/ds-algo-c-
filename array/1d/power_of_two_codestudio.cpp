#include<bits/stdc++.h>

int twoPower(int n) {
	if(n == 1) {
		return true;
	}
	if(n % 2 != 0 || n == 0) {
		return false;
	}
	return twoPower(n / 2);
}

bool isPowerOfTwo(int n) {
	return  twoPower(n);
}

int main() {

	int num = 30;
	std::cout << isPowerOfTwo(num) << '\n';

	return 0;
}