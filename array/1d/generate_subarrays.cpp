#include<bits/stdc++.h>


int main() {

	std::vector<int>arr = {1, 2, 3};

	for(int i = 0; i < arr.size(); i++) {
		for(int j = i; j < arr.size(); j++) {
			for(int k = i; k <= j; k++) {
				std::cout << arr[k] << " ";
			}
			std::cout << '\n';
		}
	}

	return 0;
}