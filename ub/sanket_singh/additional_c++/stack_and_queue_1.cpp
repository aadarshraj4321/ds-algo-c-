#include<bits/stdc++.h>



int main() {

	std::stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	s.pop();


	std::cout << s.top() << '\n';
	std::cout << s.empty() << '\n';
	std::cout << "---------------------\n";
	std::cout << "---------------------\n";


	std::vector<int>v{1, 2, 3, 4, 5};
	std::stack<int, std::vector<int>>s2(v);

	while(not s2.empty()) {
		std::cout << s2.top() << '\n';
		s2.pop();
	}

	std::cout << "----------------\n";

	std::cout << "-------------------------------\n";
	std::cout << "----------queue-------------------\n";
	std::cout << "-------------------------------------\n";
	std::cout << '\n';

	std::queue<int>q;
	q.push(20);
	q.push(200);
	q.push(2000);
	q.pop();
	q.pop();

	std::cout << q.front() << '\n';
	std::cout << q.empty() << '\n';



	return 0;
}