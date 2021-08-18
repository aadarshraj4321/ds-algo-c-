#include<bits/stdc++.h>


int dp[100005];
int houseRobberTD(int n, std::vector<int>&v) {
	if(n == 0) return v[0];
	if(n == 1) return std::max(v[1], v[0]);
	if(dp[n] != -1) return dp[n];
	return dp[n] = std::max(houseRobberTD(n - 1, v), v[n] + houseRobberTD(n - 2, v));
}


int houseRobberBU(int n, std::vector<int>&v) {
	std::vector<int>dp(n, 0);
	dp[0] = v[0];
	dp[1] = std::max(v[1], v[0]);
	for(int i = 2; i < n; i++) {
		dp[i] = std::max(dp[i - 1], v[i] + dp[i - 2]);
	}
	return dp[n - 1];
}



int main(){

	int n, x;
	std::cin >> n;
	std::vector<int>v;
	for(int i = 0; i < n; i++) {
		std::cin >> x;
		v.push_back(x);
	}
	std::memset(dp, -1, sizeof(dp));
	std::cout << houseRobberTD(n, v) << " " << houseRobberBU(n, v) << '\n';

	return 0;
}