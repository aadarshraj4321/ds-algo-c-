#include<bits/stdc++.h>

int minDistanceWord(std::vector<std::string>words, std::string wordOne, std::string wordTwo) {

	int mini = words.size();
	int a1 = -1;
	int a2 = -1;

	for(int i = 0; i < words.size(); i++) {
		if(words[i] == wordOne) {
			a1 = i;
		}
		if(words[i] == wordTwo) {
			a2 = i;
		}
		if(a1 != -1 && a2 != -1) {
			mini = std::min(mini, std::abs(a1 - a2));
		}
	}
	return mini;
}


int main() {

	std::vector<std::string>words = {"hello", "this", "is", "c++", "ok", "bye"};
	std::string wordOne = "hello";
	std::string wordTwo = "c++";
	std::cout << minDistanceWord(words, wordOne, wordTwo);

	return 0;
}