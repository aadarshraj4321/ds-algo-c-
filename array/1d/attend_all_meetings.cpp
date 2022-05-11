#include<bits/stdc++.h>


bool isMeetingPossible(std::vector<std::vector<int>>meetings) {

	std::sort(meetings.begin(), meetings.end());
	int i = 1;
	while(i < meetings.size()) {
		if(meetings[i][0] < meetings[i - 1][1]) {
			return false;
		}
		i++;
	}
	return true;
}


int main() {

	std::vector<std::vector<int>>meetings = {{5, 10},
											 {16, 18},
											 {0, 5},
											 {21, 24},
											 {13, 16}};
	if(isMeetingPossible(meetings)) {
		std::cout << "True\n";
	}
	else {
		std::cout << "False\n";
	}

	return 0;
}