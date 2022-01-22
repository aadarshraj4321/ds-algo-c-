#include<bits/stdc++.h>



int main() {

	int n;
	std::cin >> n;

	int arr[n];
	

	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	int range;
	std::cin >> range;
	while(range--) {
		long long sum = 0;
		int l, r;
		std::cin >> l >> r;
		for(int i = l; i <= r; i++) {
			sum += arr[i];
		}
		std::cout << sum << '\n';
	}




	return 0;
}