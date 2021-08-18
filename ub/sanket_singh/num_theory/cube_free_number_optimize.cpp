#include<bits/stdc++.h>
#define ll long long int
#define ump std::unordered_map

ump<ll, ll>mp;
std::bitset<1000005>cubeS;

void cubeFree(int n) {

	cubeS.set();
	for(int div = 2; div * div * div <= n; div++) {
		if(cubeS[div]) {
			for(int mul = 1; div * div * div * mul <= n; mul++) {
				cubeS[div * div * div * mul] = false;
			}
		}
	}
	int c = 1;
	mp[1] = c;
	for(int i = 2; i < 1000005; i++) {
		if(cubeS[i]) {
			mp[i] = ++c;
		}
	}
}


int main() {

	int testCase;
	std::cin >> testCase;
	cubeFree(1000000);
	for(int t = 1; t <= testCase; t++) {
		int n;
		std::cin >> n;
		if(mp.count(n)) {
			std::cout << "Case " << t << ": " << mp[n] << '\n';
		}
		else {
			std::cout << "Case " << t << ": " << "Not Cube Free\n";
		}
	}


	return 0;
}