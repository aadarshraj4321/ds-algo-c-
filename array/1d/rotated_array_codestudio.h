#include<bits/stdc++.h>

int main() {
    
	int n;
	std::cin >> n;
	std::vector<int>arr;
	for(int i = 0; i < n; i++) {
		int t;
		std::cin >> t;
		arr.push_back(t);
	}
	int k;
	std::cin >> k;
	
	std::vector<int>arrRot;
	int curr = 0;
	for(int i = k; i < n; i++) {
		arrRot[curr] = arr[i];
		curr++;
	}
	
	for(int i = 0; i < k; i++) {
		arrRot[curr] = arr[i];
	}

    return 0;
}