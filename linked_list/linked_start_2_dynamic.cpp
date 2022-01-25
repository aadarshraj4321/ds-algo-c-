#include<bits/stdc++.h>


class Node {

	public:
		int data;
		Node *next;

		Node(int val) {
			this->data = val;
			next = NULL;
		}
};

void printLL(Node *head) {
	Node *tmp = head;
	while(tmp != NULL) {
		std::cout << tmp->data << "-->";
		tmp = tmp->next;
	}
	std::cout << "NULL\n";
}

int main() {
	
	// Node *n1 = new Node(100);
	// Node *head = &n1;
	// Node *n2 = new Node(200);
	// Node *n3 = new Node(300);
	// Node *n4 = new Node(400);
	// Node *n5 = new Node(500);
	// Node *n6 = new Node(600);
	// Node *n7 = new Node(700);

	// n1.next = &n2;
	// n2.next = &n3;
	// n3.next = &n4;
	// n4.next = &n5;
	// n5.next = &n6;
	// n6.next = &n7;

	Node n1(10);
	Node *head = &n1;
	Node n2(20);
	Node n3(30);
	Node n4(40);
	Node n5(50);

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;

	printLL(head);


	return 0;
}