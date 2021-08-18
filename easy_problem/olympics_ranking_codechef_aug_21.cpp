#include<bits/stdc++.h>

int main() {

	int t;
	std::cin >> t;
	while(t--) {
		int g1, s1, b1, g2, s2, b2;
		std::cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;

		if(g1 + s1 + b1 > g2 + s2 + b2) std::cout << "1\n";
		else std::cout << "2\n";
	}
	return 0;
}