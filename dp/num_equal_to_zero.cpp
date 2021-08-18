#include<bits/stdc++.h>
#define ll long long int
#define inf 1e18



std::vector<ll>getDigits(int n) {
	std::vector<ll>v;

	while(n) {
		if(n % 10 != 0) {
			v.push_back(n % 10);
		}
		n /= 10;
	}

	return v;
}



int main() {

	ll n;
	std::cin >> n;
	std::vector<ll>dp(n + 1, inf);

	for(int i = 1; i <= 9; i++) {
		dp[i] = 1;
	}

	for(int i = 10; i < n; i++) {
		std::vector<ll>digits = getDigits(i);
		for(int j = 0; j < digits.size() - 1; j++) {
			dp[i] = std::min(dp[i],  1 + dp[i - digits[j]]);
		}
	}
	std::cout << dp[n] << '\n';

	return 0;
}