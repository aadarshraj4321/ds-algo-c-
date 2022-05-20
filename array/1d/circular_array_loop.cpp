#include<bits/stdc++.h>

int nextIndex(std::vector<int>arr, int i) {
	return (arr[i] + i + arr.size()) % arr.size();
}

bool isCycleInArray(std::vector<int>arr) {

	for(int i = 0; i < arr.size(); i++) {

		if(arr[i] == 0) {
			continue;
		}

		int slow = i;
		int fast = i;

		while(arr[slow] * arr[nextIndex(arr, slow)] > 0 && 
			arr[fast] * arr[nextIndex(arr, fast)] > 0 && 
			arr[fast] * arr[nextIndex(arr, nextIndex(arr, fast))] > 0) {

			slow = nextIndex(arr, slow);
			fast = nextIndex(arr, nextIndex(arr, fast));

			if(slow == fast) {
				if(slow == nextIndex(arr, slow)) {
					break;
				}
				return true;
			}
		}
		slow = i;
		int val = arr[slow];
		while(val * arr[slow] > 0) {
			int x = slow;
			slow = nextIndex(arr, slow);
			arr[x] = 0;
		}
	}
	return false;
}

int main() {


	std::vector<int>arr = {3, 1, 2};
	std::cout << isCycleInArray(arr) << '\n';

	return 0;
}