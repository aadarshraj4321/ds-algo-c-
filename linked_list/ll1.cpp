#include<bits/stdc++.h>

class Node {

public:
	int data;
	Node *next;

	Node(int data) {
		this->data = data;
		next = NULL;
	}
};


void printLL(Node *head) {

	Node *temp = head;
	while(temp != NULL) {
		std::cout << temp->data  << "-->";
		temp = temp->next;
	}
	std::cout << "NULL\n";
}


Node *takeInput() {

	int data;
	std::cin >> data;

	Node *head = NULL;
	Node *tail = NULL;

	while(data != -1) {
		Node *newData = new Node(data);
		if(head == NULL) {
			head = newData;
			tail = newData;
		}
		else {
			tail->next = newData;
			tail = tail->next;
		}
		std::cin >> data;
	}
	return head;
}


int main() {

	Node *head = takeInput();
	printLL(head);

	return 0;
}