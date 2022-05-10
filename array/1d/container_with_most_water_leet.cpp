#include<bits/stdc++.h>

int mostWaterContainer(std::vector<int>arr) {

	int left = 0;
	int right = arr.size() - 1;
	int maxi = INT_MIN;

	while(left < right) {
		int width = right - left;
		int height = std::min(arr[left], arr[right]);
		int finalArea = height * width;
		maxi = std::max(maxi, finalArea);
		if(arr[left] < arr[right]) {
			left++;
		}
		else {
			right--;
		}
	}
	return maxi;
}

int main() {


	std::vector<int>arr = {1,1};
	std::cout << mostWaterContainer(arr) << '\n';

	return 0;
}