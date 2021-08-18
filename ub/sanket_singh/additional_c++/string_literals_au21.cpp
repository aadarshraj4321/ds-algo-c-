#include<bits/stdc++.h>
using namespace std::string_literals;


int main() {

	std::string s1 = "Sunday";
	std::cout << s1 << " " << sizeof(s1) << '\n';	

	// std::string s2 = "sunday" + "monday"; this will throw error because of const  + const

	std::string s2 = std::string("Sanket") + " Singh";
	std::cout << s2 << " " << sizeof(s2) << '\n';

	s1 += " Monday";
	std::cout << s1 << " " << sizeof(s1) << '\n';
	s1 += " Tuesday";
	std::cout << s1 << " " << sizeof(s1) << '\n';

	const char s3[20] = "Friday";

	const char *s4 = u8"Friday";       // 8 bit u8 -> UTF-8 

	const char16_t *s5 = u"Sunday";    // 16 bit  -> UTF-16

	const char32_t *s6 = U"Sunday";     // 32 buit -> UTF-32

	char16_t ch1 = 'a';
	char32_t ch2 = 'b';

	std::cout << s3 << " " << s4 << " " << s5 << " " << s6 << '\n';
	std::cout << sizeof(s3) << " " << sizeof(s4) << " " << sizeof(s5) << " " << sizeof(s6) << '\n';
	std::cout << sizeof(ch1) << " " << sizeof(ch2) << '\n';
	std::cout << (char)s5[0] << " " << (char)s6[3] << '\n';
	std::cout << (char)ch1 << " " << (char)ch2 << '\n';

	const wchar_t *wstr = L"Thrusday";
	std::cout << wstr << " " << sizeof(wstr) << '\n';
	std::wcout << wstr << " " << sizeof(wstr) << '\n';

	std::wstring wstr1 = L"Holiday";
	std::wcout << wstr1 << " " << sizeof(wstr1) << '\n'; 

	std::cout << "-----------------------------------------\n";
	std::cout << "-----------------------------------------\n";

//	String literals using -> using namespace std::string_literals -> s;
	std::string s7 = "Sunday "s + "Monday";
	std::cout << s7 << " " << sizeof(s7) << '\n'; 


	const char *multiLine = "Line1\n"
	"Line2\n"
	"Line3\n"
	"Line4 ";
	std::cout << multiLine << " " << sizeof(multiLine) << '\n';
	std::cout << '\n';

	const char *multiLine2 = R"(
Line 1
Line 2
Line 3
Line 4)";
	std::cout << multiLine2 << " " << sizeof(multiLine2) << '\n';

	return 0;
}