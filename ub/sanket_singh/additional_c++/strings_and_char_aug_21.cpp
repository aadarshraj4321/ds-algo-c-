#include<bits/stdc++.h>

int main() {

	char s1[] = "Hello World";
	std::cout << s1 << " " << sizeof(s1) << '\n';

	//char s2 = 'H';
	//std::cout << s2 << '\n';

	char s2[7] = "google";
	std::cout << s2 << " " << sizeof(s2) << '\n';

	s1[0] = 's';
	s2[0] = 's';
	std::cout << s1 << " " << s2 << '\n';

	const char *s3 = "Hello Bad";
	std::cout << s3 << " " << *s3 << '\n';
	//s3[0] = "h";
	//s3[1] = "E";
	//std::cout << s3 << " " << *s3 << '\n';
	s3 = "Badder";
	std::cout << s3 << " " << *s3 << '\n';

	char s4[10] = {'S', 'u', 'n', 'd', 'a', 'y'};
	std::cout << s4 << " " << sizeof(s4) << '\n';

	char s5[10] = {'S', 'u', 'n', '\0', 'd', 'a', 'y'};
	std::cout << s5 << " " << sizeof(s5) << '\n';

	char s6[10] = {'S', 'u', 0, 'n', 'd', 'a', 'y'};
	std::cout << s6 << " " << sizeof(s6) << '\n';

	std::cout << "--------------------------------------------\n";
	std::cout << "--------------------------------------------\n";

	std::string s7 = "Sunday";
	std::cout << s7 << " " << sizeof(s7) << '\n';


	return 0;
}