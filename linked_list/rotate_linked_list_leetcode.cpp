#include<bits/stdc++.h>



class Node {

public:
	int data;
	Node *next;

	Node(int data) {
		this->data = data;
		next = 	NULL;
	}
};


Node *rotatedList(Node *head) {
	
}

Node *takeInput() {
	int data;
	std::cin >> data;

	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
		std::cin >> data;
	}
	return head;
}


void printLL(Node *head) {
	Node *curr = head;
	while(curr != NULL) {
		std::cout << curr->data << "-->";
		curr = curr->next;
	}
	std::cout << "NULL\n";
}



int main() {

	Node *head = takeInput();
	printLL(head);

	return 0;
}