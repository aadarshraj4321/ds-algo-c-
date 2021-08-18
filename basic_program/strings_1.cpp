#include<bits/stdc++.h>
using namespace std::string_literals;



int main() {

	std::string str;
	str = "Hello World!";
	std::cout << str << '\n';


	// Char

	char s4[10] = {'A', 'a', 'd', 'a', 'r', 's', 'h'};
	std::cout <<sizeof(s4) << " " << s4 << '\n';

	char s5[10] = {'S', 'a', '\0', 'k', 'e'};
	std::cout << sizeof(s5) << " " << s5 << '\n';

	char s6[10] = {'S', 'a', 0, 'k', 'e'};
	std::cout << sizeof(s6) << " " << s6 << '\n';



	// String Literals

	std::string s7 = "Save Earth";
	std::cout << sizeof(s7) << " " << s7 << '\n';

	std::string s8 = "Save";
	std::cout << sizeof(s8) << " " << s8 << '\n';

	std::string s9 = std::string("Hello ") + "World";
	std::cout << s9 << '\n';
	s9 = s9 + " Earth";
	std::cout << s9 << '\n';

	std::cout << '\n';

	std::string s10 = "Hello Tree";
	std::cout << s10 << '\n';
	s10 += " My Friend";
	std::cout << s10 << '\n';

	// we can do Mr + " Robot" using namespace std::string_literals;
	std::string s11 = "Mr"s + " Robot";
	std::cout << s11 << '\n';


	std::cout << '\n';

	// Multiline Strings;
	const char *multiline1 = "Line1\n"
	"Line2\n"
	"Line3\n"
	"Line4\n";
	std::cout << multiline1 << '\n';


	const char *multiline2 = R"(Line 1 Hello This
	Line 2 Is The Earth
	Line 3 Human Is Not Diserve
	Line 4 Earth Or Anything Else)";
	std::cout << multiline2 << '\n';




	

	return 0;
}