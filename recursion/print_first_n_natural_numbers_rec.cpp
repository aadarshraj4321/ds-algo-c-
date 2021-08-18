#include<bits/stdc++.h>


void printN(int n) {

	if(n == 0) {
		return;
	}

	printN(n - 1);
	std::cout << n << '\n';

}


int main() {

	int n;
	std::cin >> n;
	printN(n);

	return 0; 
}