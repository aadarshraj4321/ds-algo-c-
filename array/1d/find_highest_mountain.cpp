#include<bits/stdc++.h>

int findHighestMountain(std::vector<int>arr) {

	int largestMountain = 0;
	for(int i = 1; i < arr.size() - 2; i++) {

		if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
			int count = 1;
			int j = i;

			while(j >= 1 && arr[j] > arr[j - 1]) {
				count++;
				j--;
			}

			while(i <= arr.size() - 2 && arr[i] > arr[i + 1]) {
				count++;
				i++;
			}
			largestMountain = std::max(largestMountain, count);
		}
		else {
			i++;
		}
	}
	return largestMountain;
}


int main() {

	std::vector<int>arr = {0, 1, 2, 3, 4, 5, 4, 3, 2, 11, 454, 56, 3};
	std::cout << findHighestMountain(arr) << '\n';

	return 0;
}