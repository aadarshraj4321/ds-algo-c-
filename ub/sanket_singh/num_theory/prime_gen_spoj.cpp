#include<bits/stdc++.h>
#define ll long long int
#define MAX 100000
std::bitset<MAX>isPrime;
std::vector<int>primes;


void primeGen() {
	isPrime.set();
	isPrime[0] = isPrime[1] = false;
	for(ll i = 2; i * i <= MAX; i++) {
		if(isPrime[i]) {
			for(ll j = i; j * i <= MAX; j++) {
				isPrime[j * i] = false;
			}
		}
	}
	primes.push_back(2);
	for(int i = 3; i <= MAX; i += 2) {
		if(isPrime[i]) primes.push_back(i);
	}
}

void segmentedSieve(ll a, ll b) {
	
	std::vector<bool>seg(b - a + 1, true);
	if(a == 1) a++;
	for(int i = 0; primes[i] * primes[i] <= b; i++) {
		ll p = primes[i];
		ll j = (a / p) *p;
		if(j < a) j += p;
		for(; j <= b; j+= p) {
			if(j != p) {
				seg[j - a] = false;
			}
		}
	}
	for(ll i = a; i <= b; i++) {
		if(seg[i - a] || i == 2) {
			std::cout << i << '\n';
		}
	}
}


int main() {

	int t;
	std::cin >> t;
	primeGen();
	while(t--) {
		int m, n;
		std::cin >> m >> n;
		segmentedSieve(m, n);
	}
	return 0;
}