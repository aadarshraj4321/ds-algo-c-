#include<bits/stdc++.h>
template<typename T>

class StackArray {

	T *data;
	int nextIndex;
	int capacity;

public:
	StackArray() {
		data = new T[4];
		nextIndex = 0;
		capacity = 4;
	}

	bool isEmpty() {
		return nextIndex == 0;
	}

	int size() {
		return nextIndex;
	}

	void push(T ele) {
		if(nextIndex == capacity) {
			T *newData = new T[2 * capacity];
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

	T pop() {
		if(isEmpty()) {
			std::cout << "Stack is empty\n";
			return 0;
		}
		nextIndex--;
		return data[nextIndex - 1];
	}

	T top() {
		if(isEmpty()) {
			std::cout << "Stack is empty\n";
			return 0;
		}
		return data[nextIndex - 1];
	}
};


int main() {

	StackArray<int>s;
	StackArray<char>c;


	s.push(20);
	s.push(200);
	s.push(2000);
	s.push(2001);

	std::cout << s.size() << '\n';
	std::cout << s.top() << '\n';
	std::cout << s.pop() << '\n';
	std::cout << s.isEmpty() << '\n';

	std::cout << '\n';
	std::cout << '\n';

	c.push('a');
	c.push('b');
	c.push('d');
	c.push('e');
	c.push('f');

	std::cout << c.size() << '\n';
	std::cout << c.top() << '\n';
	std::cout << c.pop() << '\n';
	std::cout << c.isEmpty() << '\n';


	return 0;
}