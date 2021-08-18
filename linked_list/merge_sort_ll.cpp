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
	Node *curr = head;
	while(curr != NULL) {
		std::cout << curr->data << "-->";
		curr = curr->next;
	}
	std::cout << "NULL\n";
}


Node *findMid(Node *head) {
	if(head == NULL) {
		return head;
	}

	Node *slow = head;
	Node *fast = head->next;

	while(fast->next != NULL && fast->next->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

Node mergeTwoLL(Node *head1, Node *head2) {

	if(head1 == NULL) return head2;
	if(head2 == NULL) return head1;

	Node *head = NULL;
	Node *tail = NULL;

	if(head1->data < head2->data) {
		head = head1;
		tail = head1;
		head1 = head1->next;
	}
	else {
		head = head2;
		tail = head2;
		head2 = head2->next;
	}

	while(head1 != NULL && head2 != NULL) {
		if(head1->data < head2->data) {
			tail->next = head1;
			tail = head1;
			head1 = head1->next;
		}
		else {
			tail->next = head2;
			tail = head2;
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


Node *mergeSort(Node *head) {
	if(head == NULL || head->next == NULL) {
		return head;
	}

	Node *mid = findMid(head);
	Node *half1 = head;
	Node *half2 = mid->next;
	mid->next = NULL;
	half1 = mergeSort(half1);
	half2 = mergeSort(half2);
	Node *finalHead = mergeTwoLL(half1, half2)
	return finalHead;
}



int main() {

	Node *head = takeInput();
	printLL(head);
	Node *head2 = mergeSort(head);
	printLL(head2);

	return 0;
}