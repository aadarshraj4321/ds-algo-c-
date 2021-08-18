#include<bits/stdc++.h>
#define ll long long int
#define inf 1e18



int main() {


	int t;
	std::cin >> t;
	
	while(t--) {
		ll n, k;
		std::cin >> n >> k;
		std::vector<int>arr(n);

		for(int i = 0; i < n; i++) {
			std::cin >> arr[i];
		}

		std::vector<int>dp(n, 1000000);
		// dp[i] -> min const to reach from 0-i
		dp[0] = 0;

		for(int i = 1; i < n; i++) {
			for(int j = 1; j < k; j++) {
				if(i - j < 0) break;
				dp[i] = std::min(dp[i], dp[i - j] + std::abs(arr[i] - arr[i - j]));
			}
		}
		std::cout << dp[n - 1] << '\n';

	}

	return 0;
}
