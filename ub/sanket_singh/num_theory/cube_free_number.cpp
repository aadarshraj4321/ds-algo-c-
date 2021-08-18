#include<bits/stdc++.h>


void cubeFree(int n) {

	bool isTrue = false;
	for(int i = 0; i < n; i++) {
		if(i * i * i == n) {
			isTrue = true;
			break;
		}
	}
	if(isTrue) {
		std::cout << "Not Cube Free\n";
	}
	else {
		std::cout << n << '\n';
	}
}


int main() {

	int t;
	std::cin >> t;
	while(t--) {
		int i;
		std::cin >> i;
		cubeFree(i);
	}


	return 0;
}