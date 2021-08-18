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


Node *mergeLL(Node *l1, Node *l2) {

	if(l1 == NULL) return l2;
	if(l2 == NULL) return l1;

	Node *mainNode;
	if(l1->data < l2->data) {
		mainNode = l1;
		mainNode->next = mergeLL(l1->next, l2);
	}
	else {
		mainNode = l2;
		mainNode->next = mergeLL(l1, l2->next);
	}
	return mainNode;
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
			tail = tail->next;
		}
		std::cin >> data;
	}
	return head;
}


void printLL(Node *head) {
	Node *tmp = head;
	while(tmp != NULL) {
		std::cout << tmp->data << "-->";
		tmp = tmp->next;
	}
	std::cout << "NULL\n";
}


int main() {

	Node *head = takeInput();
	printLL(head);

	Node *l1 = takeInput();
	Node *l2 = takeInput();
	Node *mergeLLNode = mergeLL(l1, l2);
	std::cout << '\n';
	printLL(mergeLLNode);

	return 0;
}