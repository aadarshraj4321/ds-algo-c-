#include<bits/stdc++.h>

int main(){

	int t;
	std::cin >> t;
	while(t--){
		int r1, w1, c1, r2, w2, c2;
		std::cin >> r1 >> w1 >> c1;
		std::cin >> r2 >> w2 >> c2;

		if(r1 > r2 && w1 > w2 && c1 > c2) std::cout << "A\n";
		else if(r2 > r1 && w2 > w1 && c2 > c1) std::cout << "B\n";

		else if(r1 > r2 && w1 > w2) std::cout << "A\n";
		else if(r2 > r1 && w2 > w1) std::cout << "B\n";
		else if(c1 > c2 && w1 > w2) std::cout << "A\n";
		else if(c2 > c1 && w2 > w1) std::cout << "B\n";
		else if(r1 > r2 && c1 > c2) std::cout << "A\n";
		else if(r2 > r1 && c2 > c1) std::cout << "B\n";
	}

	return 0;
}