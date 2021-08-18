#include<bits/stdc++.h>


int fibDP(int n, std::vector<int>dp) {

	if(n == 0 || n == 1) return n;
	if(dp[n] != -1) return dp[n];
	return dp[n] = fibDP(n - 1, dp) + fibDP(n - 2, dp);
}

int fibDPBottomUp(int n) {
	std::vector<int>dp(n + 1, -1);
	dp[0] = 0;
	dp[1] = 1;
	for(int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}



int main(){

	int n;
	std::cin >> n;
	std::vector<int>dp(n + 1, -1);
	std::cout << fibDP(n, dp) << '\n';
	std::cout << fibDPBottomUp(n) << '\n';
	std::cout << fibDPBottomUpOptimize(n) << '\n';

	return 0;
}