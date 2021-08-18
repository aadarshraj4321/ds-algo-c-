#include<bits/stdc++.h>


void hello() {
	std::cout << "Hello World\n";
}

int fun(int n) {
	std::cout << "Fun with " << n << '\n';
	return n;
}



void for_each(std::vector<int>&v, void(*func)(int)) {
	for(auto val: v) {
		func(val);
	}
}


void sqrtLoop(int n) {
	std::cout << "Sqrt of : " << n << " is : " << n * n << '\n';
}

void Print(int v) {
	std::cout << "Value is : " << v << '\n';
}

int main() {

	void (*ptr)() = hello;
	std::cout << ptr << '\n';
	ptr();

	std::cout << '\n';
//-------------------------------------
	auto pt = hello;
	pt();
	std::cout << pt << '\n';
	std::cout << '\n';

//-------------------------------------


	int (*ptrr)(int) = fun;
	ptrr(10);
	std::cout << ptrr << " " << *ptrr << '\n';
	std::cout << '\n';

//--------------------------------------

	std::vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8};
	for_each(arr, [](int arr) {std::cout << "Value from lambda : " << arr << '\n';});
	std::cout << '\n';
//--------------------------------------

	for_each(arr, sqrtLoop);
	std::cout << '\n';
	std::cout << '\n';
//---------------------------------------

	for_each(arr, [](int arr) {std::cout << "Value from lambda : " << arr << " square is : " << arr * arr << '\n';});

	return 0;
}