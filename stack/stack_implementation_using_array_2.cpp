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
			std::cout << "Stack is empty\n";
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	}

	void push(int element) {
		if(nextIndex == capacity) {
			std::cout << "Stack is full\n";
			return;
		}
		data[nextIndex] = element;
		nextIndex++;
	}
};


int main() {

	StackArray st(6);

	st.push(100);
	st.push(200);
	st.push(300);
	st.push(400);
	st.push(500);

	std::cout << st.top() << '\n';
	std::cout << st.size() << '\n';
	std::cout << st.pop() << '\n';

	std::cout << st.pop() << '\n';
	std::cout << st.pop() << '\n';

	std::cout << st.top() << '\n';
	std::cout << st.size() << '\n';
	std::cout << st.isEmpty() << '\n';

	return 0;
}