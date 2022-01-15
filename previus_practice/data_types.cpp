#include<bits/stdc++.h>


int main() {

	bool b = true;
	int i = 10;
	float f = 10.23;
	double d = 2000;
	long l = 23l;
	long long int llInt = 25;
	char c = 'h';
	char ch1[] = "this is another type of string";
	std::string strSize = "Hello World";


	std::cout << "Bool Size : " << sizeof(b) << '\n' << "Int Size : " << sizeof(i) << '\n' << "Float Size : " << sizeof(f) << '\n' << "Double Size : " << sizeof(d) << '\n' << "Long Size : " << sizeof(l) << '\n' << "Long Long Int : "<< sizeof(llInt) << '\n' << "Char Size : " << sizeof(c) << '\n' << "Char String Size : " << sizeof(ch1) << '\n' << "String Size : " << sizeof(strSize) << '\n';

	std::cout << strSize.length() << '\n';

	return 0;
}