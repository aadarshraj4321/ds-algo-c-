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

	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		return nextIndex == 0;
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
			return 0;
		}
		nextIndex--;
		return data[nextIndex - 1];
	}

	T top() {
		if(isEmpty()) {
			return 0;
		}
		return data[nextIndex - 1];
	}
};



int main() {

	StackArray<int>s;

	s.push(20);
	s.push(200);
	s.push(2000);

	std::cout << s.top() << '\n';
	std::cout << s.pop() << '\n';


	return 0;
}