#include<bits/stdc++.h>

int total = 0;
void towerOfHanoi(int n, std::string s1, std::string s2, std::string s3) {

	if(n == 1) {
		total++;
		std::cout << "Move disk 1 from rod " << s1 << " to rod " << s3 << '\n';
		return;
	}

	towerOfHanoi(n - 1, s1, s3, s2);
	std::cout << "Move disk " << n << " from rod " << s1 << " to rod " <<  s3 << '\n';
	total++;
	towerOfHanoi(n - 1, s2, s1, s3);
	return;
}


int main() {

	int n;
	std::cin >> n;

	towerOfHanoi(n, "start", "temp", "end");
	std::cout << '\n';
	std::cout << total << '\n';

	return 0;
}