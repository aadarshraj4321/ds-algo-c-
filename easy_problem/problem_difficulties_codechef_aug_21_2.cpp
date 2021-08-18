sd#include<bits/stdc++.h>
#define sset std::unordered_set


int main() {

	int t;
	std::cin >> t;
	while(t--) {
		int a1, a2, a3, a4;
		std::cin >> a1 >> a2 >> a3 >> a4;

		if(a1 != a2 && a1 != a3 && a1 != a4 && a2 != a3 && a2 != a4 && a3 != a4) std::cout << "2\n";
		else if(a1 == a2 == a3 == a4) std::cout << "0\n";
		else if()

	return 0;
}