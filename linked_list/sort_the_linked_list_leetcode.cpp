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

Node *sortTheLL(Node *head) {

	Node *head1 = NULL;
	Node *tail = NULL;

	std::vector<int>arr;
	Node *curr = head;
	while(curr != NULL) {
		arr.push_back(curr->data);
		curr = curr->next;
	}

	std::sort(arr.begin(), arr.end());

	for(int i = 0; i < arr.size(); i++) {
		Node *newNode = new Node(arr[i]);
		if(head1 == NULL) {
			head1 = tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
	}
	return head1;
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
	Node *head2 = sortTheLL(head);
	printLL(head2);

	return 0;
}