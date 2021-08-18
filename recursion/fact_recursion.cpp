#include<bits/stdc++.h>


int fact(int n) {

	if(n <= 1) {
		return 1;
	}

	//int subproblem = fact(n - 1);
	//return n * subproblem;
	return n * fact(n - 1);
}


int main() {

	std::cout << fact(5) << '\n';

	return 0;
}