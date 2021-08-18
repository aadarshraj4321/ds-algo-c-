#include<bits/stdc++.h>


bool primeGen(int n) {

	bool isPrime[n + 1];

	for(int i = 0; i <= n; i++) {
		isPrime[i] = true;
	}
	isPrime[0] = false;
	isPrime[1] = false;

	for(int i = 2; i * i <= n; i++) {
		if(isPrime[i] == true) {
			for(int j = i * i; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}
	if(isPrime[n]) {
		return true;
	}
	else {
		return false;
	}
}


int main() {

	int t;
	std::cin >> t;
	while(t--) {
		int m, n;
		std::cin >> m >> n;
		for(int i = m; i < n + 1; i++) {
			if(primeGen(i)) {
				std::cout << i << '\n';
			} 
		}
	}
	return 0;
}