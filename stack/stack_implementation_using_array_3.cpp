#include<bits/stdc++.h>


class StackArray {
	int *data;
	int nextIndex;
	int capacity;

public:
	StackArray(int totalSize) {
		data = new int[totalSize];
		nextIndex = 0;
		capacity = totalSize;
	}

	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		return nextIndex == 0;
	}

	int top() {
		if(isEmpty()) {
			std::cout << "Stack is empty\n";
			return INT_MIN;
		}
		return data[nextIndex - 1];
	}

	int pop() {
		if(isEmpty()) {
			std::cout << "Stack Is Empty\n";
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	}

	void push(int val) {
		if(nextIndex == capacity) {
			std::cout << "Stack is Full\n";
			return;
		}
		data[nextIndex] = val;
		nextIndex++;
	}
};


int main() {

	int n;
	std::cin >> n;
	StackArray s(n);

	s.push(20);
	s.push(40);

	std::cout << s.top() << '\n';
	std::cout << s.size() << '\n';
	std::cout << s.pop() << '\n';
	std::cout << s.isEmpty() << '\n';

	s.push(60);
	s.push(100);

	std::cout << s.top() << '\n';
	std::cout << s.size() << '\n';
	std::cout << s.pop() << '\n';
	std::cout << s.isEmpty() << '\n';
	std::cout << s.pop() << '\n';
	std::cout << s.pop() << '\n';
	std::cout << s.isEmpty() << '\n';
	std::cout << s.top() << '\n';

	return 0;
}