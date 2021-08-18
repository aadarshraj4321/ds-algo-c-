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


Node *addLLTwo(Node *head1, Node *head2) {

	std::stack<int>s1;
	std::stack<int>s2;

	while(head1 != NULL) {
		s1.push(head1->data);
		head1 = head1->next;
	}

	while(head2 != NULL) {
		s2.push(head2->data);
		head2 = head2->next;
	}

	int prev_carry = 0;
	Node *dummy = new Node(0);

	while(!s1.empty() || !s2.empty()) {
		int val = 0;
		if(!s1.empty()) {
			val += s1.top();
			s1.pop();
		}

		if(!s2.empty()) {
			val += s2.top();
			s2.pop();
		}

		val += prev_carry;
		prev_carry = val >= 10;
		val = val % 10;

		dummy->next = new Node(val);
		dummy = dummy->next;
	}

	if(prev_carry == 1) {
		dummy->next = new Node(1);
		dummy = dummy->next;
	}
	Node *finalHead = dummy->next;
	delete dummy;
	return finalHead;
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

	Node *addHead1Head2 = addLLTwo(head1, head2);
	printLL(addHead1Head2);

	return 0;
}