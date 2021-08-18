#include<bits/stdc++.h>


class Node {	
	public:
	int data;
	Node *next;


	Node(int data) {
		this->data  = data;
		next = NULL;
	}
};



Node *removeNthFromEnd(Node *head, int pos) {

	if(head->next == NULL) return NULL;

	int l = 0, r = 0;
	int diff = pos - 1;
	Node *first = head;
	Node *second = head;

	while(second->next != NULL) {
		r++;
		second = second->next;
	}

	int k = (r -l) - diff;
	if(k == 0) {
		head = first->next;
		return head;
	}
	while(k > 1) {
		first = first->next;
		k--;
	}
	first->next = first->next->next;
	return head;


}

Node *removeFromEnd(Node *head, int pos) {

	if(head == NULL) {
		return head;
	}

	Node *front = head;
	Node *start = head;
	int startCount = 0;

	while(startCount <= pos - 1) {
		start = start->next;
		startCount++;
	}

	if(start == NULL) {
		head->data = head->next->data;
		head->next = head->next->next;
		return head;
	}

	while(start->next != NULL) {
		front = front->next;
		start = start->next;
	}
	front->next = front->next->next;
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
	Node *removeIth = removeNthFromEnd(head, 2);
	printLL(removeIth);

	return 0;
}