#include<bits/stdc++.h>
template<class T>

T abs(T n) {
	return (n < 0) ? -n : n;
}	

<template class T>
class Stack {
private:
	T st[5];
	int top;
public:
	Stack() {
		top = -1;
	}

	void push(T element) {
		st[++top] = element
	}

	void pop()
 {
 	return st[top--];
 }}


int main() {

	std::cout << abs(20) << '\n';
	std::cout << abs(20.0f) << '\n';

	// Stack<float>s(1);
	// s.push(2.3f);
	// std::cout << s.top() << '\n';

	return 0;
}