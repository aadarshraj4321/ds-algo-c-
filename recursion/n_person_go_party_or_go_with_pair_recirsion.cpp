#include<bits/stdc++.h>


int nPersonParty(int n) {

	if(n == 1) return 1;
	if(n == 2) return 2;

	return nPersonParty(n - 1) + (n - 1) * nPersonParty(n - 2);
}b


int main() { 

	int n;
	std::cin >> n;
	std::cout << nPersonParty(n) << '\n';

	return 0; 
}