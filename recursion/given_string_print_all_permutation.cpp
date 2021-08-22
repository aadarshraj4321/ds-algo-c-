#include<bits/stdc++.h>

void printAllPermutation(std::string s, std::string osf) {

	if(s.size() == 0) {
		std::cout << osf << '\n';
		return;
	}
	std::unordered_set<char>ss;
	for(int i = 0; i < s.size(); i++) {
		char ch = s[i];
		if(ss.count(ch) == 0) {			
			std::string ros = s.substr(0, i) + s.substr(i + 1);
			ss.insert(ch);
			printAllPermutation(ros, osf + ch);
		}

	}
}


int main() {

	std::string s;
	std::cin >> s;
	printAllPermutation(s, "");

	return 0;
}