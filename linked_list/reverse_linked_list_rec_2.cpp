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


class Pair {
	public:
	Node *head;
	Node *tail;
};


Pair reverseRecPair(Node *head) {
	if(head == NULL || head->next == NULL) {
		Pair ans;
		ans.head = head;
		ans.tail = head;
		return ans;
	}

	Pair smallAns = reverseRecPair(head->next);
	smallAns.tail->next = head;
	head->next = NULL;
	Pair ans;
	ans.head = smallAns.head;
	ans.tail = head;
	return ans;
} 

Node *reverseRecPairBetter(Node *head) {
	return reverseRecPair(head).head;
}



Node *reverseRec(Node *head) {

	if(head == NULL || head->next == NULL) {
		return head;
	}

	Node *smallAns = reverseRec(head->next);
	Node *tmp = smallAns;
	while(tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = head;
	head->next = NULL;
	return smallAns;
}




Node *takeInput() {

	int data;+
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


bool isPalindrome(Node *head) {
	std::stack<int>s;
	for(Node *curr = head; curr != NULL; curr = curr->next) s.push(curr->data);

	for(Node *curr = head; curr != NULL; curr = curr->next) {
		if(s.top() != curr->data) {
			return false;
		}
		s.pop();
	}
	return true;
}



int main() {

	Node *head = takeInput();
	printLL(head);

	Node *head1 = reverseRec(head);
	printLL(head1);

	Node *head2 = reverseRecPairBetter(head1);
	printLL(head2);

	Node *head3 = takeInput();
	if(isPalindrome(head3)) std::cout << "Palindrome\n";
	else std::cout << "Not Palindrome\n";

	return 0;
}