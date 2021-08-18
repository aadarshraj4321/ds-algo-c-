#include<bits/stdc++.h>


int main() {

	std::stack<int>s;
	s.push(20);
	s.push(30);
	s.push(40);

	std::cout << s.top() << '\n';
	std::cout << s.empty() << '\n';

	s.pop();
	s.pop();

	std::cout << s.top() << '\n';
	std::cout << s.empty() << '\n';

	return 0;
}