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


// Add two number

Node *addLL(Node *l1, Node *l2) {

	Node *dummy = new Node(0);
	Node *tmp = dummy;
	int prev = 0;

	while(l1 ||  l2) {
		int sum = prev;
		if(l1) {
			sum += l1->data;
			l1 = l1->next;
		}

		if(l2) {
			sum += l2->data;
			l2 = l2->next;
		}
		int p = sum % 10;
		if(sum >= 10) {
			prev = 1;
		}
		else {
			prev = 0;
		}
		dummy->next = new Node(p);
		dummy = dummy->next;
	}
	if(prev == 1) {
		dummy->next = new Node(1);
	}
	return tmp->next;

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
	Node *head2 = addLL(l1, l2);
	printLL(head2);


	return 0;
}