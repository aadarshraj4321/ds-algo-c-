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


bool detectCycleOne(Node *head) {

	Node *slow = head;
	Node *fast = head;
	while(fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if(fast != slow) return true;
	}
	return false;
}


int detectCycleTwo(Node *head) {
	if(head == NULL || head->next == NULL) return -1;

	Node *slow = head;
	Node *fast = head;
	while(fast->next != NULL && fast->next->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast) {
			fast = head;
			while(slow != fast) {
				fast = fast->next;
				slow = slow->next;
			}
			return fast->data;
		}
	}
	return -1;
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
	if(detectCycleOne(head)) {
		std::cout << "True\n";
	}
	else {
		std::cout << "False\n";
	}

	std::cout << '\n';
	std::cout << detectCycleTwo(head) << '\n';

	return 0;
}