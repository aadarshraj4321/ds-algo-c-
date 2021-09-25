#include<bits/stdc++.h>

template<typename T>
class Node {

public:
	T data;
	Node<T> *next;


	Node(T ele) {
		this->data = ele;
		next = NULL;
	}
};

template<typename T>
class StackLL {

	Node<T> *head;
	int size;

public:
	StackLL() {
		head = NULL;
		size = 0;
	}

	int getSize() {
		return size;
	}

	bool isEmpty() {
		return size == 0;
	}

	void push(T ele) {
		Node<T> *newData = new Node<T>(ele);
		newData->next = head;
		head = newData;
		size++;
	}

	T pop() {
		if(isEmpty()) {
			return 0;
		}
		T ans = head->data;
		Node<T> *tmp = head->next;
		head = head->next;
		delete tmp;
		size--;
		return ans;
	}

	T top() {
		if(isEmpty()) {
			return 0;
		}
		return head->data;
	}
};



int main() {

	StackLL<char>c;

	c.push('c');
	c.push('h');
	c.push('a');
	c.push('r');

	std::cout << c.top() << '\n';
	std::cout << c.pop() << '\n';
	std::cout << c.getSize() << '\n';
	std::cout << c.isEmpty() << '\n';

	return 0;
}