#include<iostream>



int main() {

	int arr[5] = {1, 2, 3, 4, 5};

	for(int i = 0; i < 5; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << '\n';

	int prefix[5];
	for(int i = 0; i < 5; i++) {
		if(i == 0) prefix[i] = arr[i];
		else prefix[i] = prefix[i - 1] + arr[i];
	}

	int q;
	std::cin >> q;
	while(q--) {
		int l, r;
		std::cin >> l >> r;
		int sum = prefix[r];
		if(l > 0) sum -= prefix[l - 1];
		std::cout << sum << '\n';
	}
	

	return 0;
}