#include<bits/stdc++.h>

int findUniqueChar(std::vector<std::string>str, int i, std::string s) {

	if(i == str.size()) {
		if(s.length() > 26) {
			return 0;
		}
		int freq[26] = {0};
		for(int k = 0; k < s.length(); k++) {
			if(freq[s[k] - 'a'] == 1) {
				return 0;
			}
			freq[s[k] - 'a']++;
		}
		return s.length();
	}

	int optOne = INT_MIN;
	int optTwo = INT_MIN;
	if(s.length() + str[i].length() <= 26) {
		optOne = findUniqueChar(str, i + 1, s + str[i]);
	}
	optTwo = findUniqueChar(str, i + 1, s);
	return std::max(optOne, optTwo); 
}

int main() {

	std::vector<std::string>str;

	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		str.push_back(s);
	}

	std::cout << findUniqueChar(str, 0, "") << '\n';

	return 0;
}