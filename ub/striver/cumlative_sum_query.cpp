#include<bits/stdc++.h>
#define for0(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define fio std::ios_base::sync_with_stdio(false), std::cin.tie(NULL)



int finalResult(std::vector<int>arr, int l, int r) {

	for0(i, arr.size()) {
		arr[i] = arr[i] + arr[i - 1];
	}

	return arr[r] - arr[l - 1];

}



int main() {

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int n;
	std::cin >> n;

	std::vector<int>arr;
	for0(i, n){
		int x;
		std::cin >> x;
		arr.push_back(x);
	}

	int q;
	std::cin >> q;
	while(q--) {
		int l, r;
		std::cin >> l >> r;
		std::cout << finalResult(arr, l, r) << '\n';
	}


	return 0;
}