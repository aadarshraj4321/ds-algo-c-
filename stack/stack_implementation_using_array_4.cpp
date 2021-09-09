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


	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		return nextIndex == 0;
	}

	void push(int ele) {
		if(nextIndex == capacity) {
			int *newData = new int[2 * capacity];
			for(int i = 0; i < capacity; i++) {
				newData[i] = data[i];
			}
			capacity *= 2;
			delete [] data;
			data = newData;
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
		return data[nextIndex - 1];
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

	StackArray s;
	s.push(20);
	s.push(30);
	s.push(300);
	s.push(3000);
	s.push(3002);

	std::cout << s.size() << '\n';
	std::cout << s.top() << '\n';
	std::cout << s.pop() << '\n';
	std::cout << s.isEmpty() << '\n';
	std::cout << s.size() << '\n';

	return 0;
}