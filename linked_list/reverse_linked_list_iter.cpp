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

Node *reverseIter(Node *head) {
	Node *tmp = head;
	Node *prev = NULL;
	Node *curr = head;
	while(curr != NULL) {
		tmp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = tmp;
	}
	head = prev;
	return head;
}


Node *reverseIter_2(Node *head) {
	Node *tmp = head;
	Node *prev = NULL;
	Node *curr = head;

	while(curr != NULL) {
		tmp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = tmp;
	}
	head = prev;
	return head;
}


Node *reverseRec_3(Node *head) {

	if(head == NULL || head->next == NULL) {
		return head;
	}

	Node *smallHead = reverseRec_3(head->next);
	head->next->next = head;
	head->next = NULL;
	return smallHead;
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
	Node *head1 = reverseRec_3(head);
	printLL(head1);



	return 0;
}