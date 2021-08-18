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


Node *mergeTwoLL(Node *head1, Node *head2) {

	if(head1 == NULL) return head2;
	if(head2 == NULL) return head1;
	Node *head = NULL;
	Node *tail = NULL;

	while(head1 != NULL && head2 != NULL) {
		if(head1->data < head2->data) {
			if(head == NULL) {
				head = head1;
				tail = head1;
			}
			else {
				tail->next = head1;
				tail = head1;
			}
			head1 = head1->next;
		}
		else {
			if(head == NULL) {
				head = head2;
				tail = head2;
			}
			else {
				tail->next = head2;
				tail = head2;
			}
			head2 = head2->next;
		}
	}
	if(head1 != NULL) {
		tail->next = head1;
	}
	if(head2 != NULL) {
		tail->next = head2;
	}
	return head;
}


Node *mergeTwoLLRec(Node *head1, Node *head2) {

	if(head1 == NULL) return head2;
	if(head2 == NULL) return head1;

	Node *head;

	if(head1->data < head2->data) {
		head = head1;
		head->next = mergeTwoLLRec(head1->next, head2);
	}
	else {
		head = head2;
		head->next = mergeTwoLLRec(head1, head2->next);
	}
	return head;
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

	Node *head1 = takeInput();
	printLL(head1);
	Node *head2 = takeInput();
	printLL(head2);
	Node *head3 = mergeTwoLLRec(head1, head2);
	printLL(head3);

	return 0;
}