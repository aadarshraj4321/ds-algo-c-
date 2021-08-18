#include<bits/stdc++.h>



void *operator new(size_t size) {
	std::cout << "Called New\n";
	return malloc(size);
}

void printName(std::string name) {
	std::cout << name << '\n';
}


int main() {

	std::string s1 = "Sunday";  // SSO -> sort string optimization
	printName(s1);

	std::string s2 = "Unacademy is a platform to learn blah blah blah blah";
	std::string s3 = "ancdefghijklmno";
	printName(s2);

	std::vector<int>v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::vector<int>v1 = {1};

	std::cout << "----------------------------\n";

	std::string s = "Sunday is the go";
	s = s + "Monday";

	std::cout << "-------------------------------\n";

	std::string s8 = "Sunday is the go";
	s8 += " Tuesday";

	std::cout << "---------------------------------\n";
	std::cout << "---------------------------------\n";
	std::cout << "---------------------------------\n";


	std::string s9 = "Sunday is the go";
	for(int i = 0; i < 10; i++) {
		s9  = s9 + "q";
		std::cout << s9 << '\n';
	}

	std::cout << "---------------------------------\n";
	std::cout << "---------------------------------\n";
	std::cout << "---------------------------------\n";
	std::cout << "---------------------------------\n";

	std::string s10 = "Sunday is the go";
	for(int i = 0; i < 10; i++) {
		s10 += "q";
		std::cout << s10 << '\n';
	}

	std::cout << '\n';

	std::string str = "hello this is the main idea behind";
	std::cout << str.substr(10) << '\n';
	std::cout << str.substr(0, 10) << '\n';

	std::cout << '\n';
	std::cout << '\n';

	//std::string_view v(str.c_str() + 1, 22);
	//std::string_view v1 = "abcdefghijklmnopqrstuvwxyz";



	return 0;
}