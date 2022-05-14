#include<bits/stdc++.h>

std::vector<int>findFourElements(std::vector<int>arr, int target) {

	std::vector<int>finalResult;
	for(int i = 0; i < arr.size(); i++) {
		for(int j = i + 1; j < arr.size(); j++) {
			int left = j + 1;
			int right = arr.size() - 1;
			while(left < right) {
				int total =  arr[i] + arr[j] + arr[left] + arr[right];
				if(total == target) {
					finalResult.push_back(i);
					finalResult.push_back(j);
					finalResult.push_back(left);
					finalResult.push_back(right);
					break;
				}
				else if(total > target) {
					right--;
				}
				else {
					left++;
				}
			}
		}
	}
	return finalResult;
}

int main() {

	std::vector<int>arr = {2, 4, 6, 3, 1, 1};
	auto takeResult = findFourElements(arr, 20);

	for(auto no: takeResult) {
		std::cout << no << " ";
	}

	return 0;
}