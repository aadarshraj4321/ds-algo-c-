#include<bits/stdc++.h>
#define sset std::unordered_set


int main() {

	int t;
	std::cin >> t;
	while(t--) {
		int a1, a2, a3, a4;
		std::cin >> a1 >> a2 >> a3 >> a4;
		sset<int>s;
		s.insert(a1);
		s.insert(a2);
		s.insert(a3);
		s.insert(a4);
		int count = 0;
		for(auto ele :s) {
			count++;
		}

		if(count == 4) std::cout << "2\n";
		else if(count == 3 || count == 2) std::cout << "1\n";
		else if (count == 1) std::cout << "0\n";


	}

	return 0;
}