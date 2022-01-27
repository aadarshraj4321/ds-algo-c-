#include<bits/stdc++.h>

void hello() {
	std::cout << "Hello World\n";
}

int fun(int n) {
	std::cout << "Fun With\n";
	return n;
}

void printN(int v) {
	std::cout << "Value Is : " << v << '\n';
}

void myFunCallingYou(int val) {
	std::cout << val * val << '\n';
}

void pleaseCubeMe(int val) {
	std::coout << val * val * val << '\n';
}

void for_each(std::vector<int>&v, void(*func)(int)) {
	for(int value: v) {
		func(value);
	}
}


void pleaseSquareMe(std::vector<int>&val, void(*func)(int)) {
	for(int value: val) {
		func(value);
	}
}


int main() {
	
	int x = 10;
	int *p = &x;

	std::vector<int>arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	
	for_each(arr, printN);

	pleaseSquareMe(arr, myFunCallingYou);


	return 0;
}