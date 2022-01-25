#include<bits/stdc++.h>

class Node {

	public:
		int data;
		Node * next;

		Node (int val) {
			this->data = val;
			next = NULL;
		}
};


int main() {
	
	Node n1(10);
	Node n2(20);
	Node n3(30);
	Node n4(40);
	Node n5(50);

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;

	std::cout << n1.data << '\n';
	std::cout << n1.next << '\n';

	std::cout << n2.data << '\n';
	std::cout << n2.next << '\n';

	return 0;
}