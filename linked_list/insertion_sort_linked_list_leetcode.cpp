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


Node *insertionSortLL(Node *head) {

	if(head == NULL || head->next == NULL) {
		return head;
	}


	Node *curr = head->next;
	Node *prev = NULL;
	Node *tmpCurr = NULL;
	Node *tmp = NULL;

	head->next = NULL;

	while(curr != NULL) {
		tmpCurr = curr;
		tmp = head;
		curr = curr->next;

		while(tmp != NULL && tmp->data < tmpCurr->data) {
			prev = tmp;
			tmp = tmp->next;
		}
		if(tmp == head) {
			tmpCurr->next = tmp;
			head = tmpCurr;
		}
		else {
			prev->next = tmpCurr;
			tmpCurr->next = tmp;
		}
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

	Node *head = takeInput();
	printLL(head);
	Node *head1 = insertionSortLL(head);
	printLL(head1);

	return 0;
}