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

		// return the number of element present in stack
		int size() {
			return nextIndex;
		}

		bool isEmpty() {
			return nextIndex == 0;
		}

		void push(int ele) {
			if(nextIndex == capacity) {
				std::cout << "Stack is full\n";
				return;
			}
			data[nextIndex] = ele;
			nextIndex++;
		}

		int pop() {
			if(isEmpty()) {
				std::cout << "Stack is empty\n";
				return INT_MIN;
			}
			nextIndex--;
			return data[nextIndex];
		}

		int top() {
			if(isEmpty()) {
				std::cout << "Stack is empty\n";
				return INT_MIN;
			}
			return data[nextIndex - 1];
		}
};


int main() {

	StackArray s(5);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);

	std::cout << s.top() << '\n';
	std::cout << s.isEmpty() << '\n';
	std::cout << s.size() << '\n';
	std::cout << s.pop() << '\n';
	std::cout << s.size() << '\n';

	return 0;
}