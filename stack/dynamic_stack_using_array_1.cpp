#include<bits/stdc++.h>


class StackArray {

	int *data;
	int nextIndex;
	int capacity;

public:
	StackArray() {
		data = new int[4];
		nextIndex = 0;
		capacity = 4;
	}

	void push(int val) {
		if(nextIndex == capacity) {
			int *newData = new int[2 * capacity];
			for(int i = 0; i < capacity; i++) {
				newData[i] = data[i];
			}
			capacity *= 2;
			delete [] data;
			data = newData;
		}
		data[nextIndex] = val;
		nextIndex++;
	}

	bool isEmpty() {
		return nextIndex == 0;
	}

	int size() {
		return nextIndex;
	}

	int pop() {
		if(isEmpty()) {
			std::cout << "Stack is Empty\n";
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	}

	int top() {
		if(isEmpty()) {
			std::cout << "Stack Is Empty\n";
			return INT_MIN;
		}
		return data[nextIndex - 1];
	}
};


int main() {

	StackArray s;

	s.push(20);
	s.push(30);

	std::cout << s.top() << '\n';
	std::cout << s.size() << '\n';
	std::cout << s.isEmpty() << '\n';

	s.push(40);
	s.push(50);
	s.push(555);
	std::cout << s.top() << '\n';
	std::cout << s.size() << '\n';
	std::cout << s.isEmpty() << '\n';

	return 0;
}