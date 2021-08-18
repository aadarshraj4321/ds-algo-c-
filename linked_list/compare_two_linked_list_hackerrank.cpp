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

int lengthLL(Node *head) {
	int count = 0;
	Node *curr = head;
	while(curr != NULL) {
		count++;
		curr = curr->next;
	}
	return count;
}

int compareTwoLL(Node *head1, Node *head2) {

	if(lengthLL(head1) != lengthLL(head2)) {
		return 0;
	}

	while(head1 != NULL && head2 != NULL) {
		if(head1->data != head2->data) {
			return 0;
		}
		head1 = head1->next;
		head2 = head2->next;
	}
	return 1;
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
	std::cout << compareTwoLL(head1, head2) << '\n';

	return 0;
}