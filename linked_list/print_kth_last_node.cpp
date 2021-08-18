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



int printIthLastNode(Node *head, int pos) {

	if(head == NULL) return -1;

	Node *first = head;
	Node *second = head;
	int ans = 0;

	int right = 0;
	int left = 0;
	int diff = pos - 1;

	while(second->next != NULL) {
		second = second->next;
		right++;
	}
	int k = (right - left) - diff;
	if(k == 0) ans = head->data;
	while(k > 1) {
		first = first->next;
		k--;
	}
	first->next = first->next->next;
	ans = first->next->data;
	return ans;


}


int findIth(Node *head, int pos) {

	int count  = 0;
	int ans = 0;
	int count2 = 0;
	Node *tmp = head;
	Node *tmp2 = head;
	while(tmp->next != NULL) {
		tmp = tmp->next;
		count++;
	}

	while(count2 <= count - pos) {
		tmp2 = tmp2->next;
		count2++;
	}
	ans = tmp2->data;
	return ans;


}


Node *takeInput() {
	int data;
	std::cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) head = tail = newNode;
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



Node *reverseLL(Node *head) {
	if(head == NULL) return head;

	reverseLL(head->next);
	return head;
}


int main() {

	Node *head = takeInput();
	printLL(head);
	std::cout << printIthLastNode(head, 2) << '\n';
	std::cout << findIth(head, 2) << '\n';
	return 0;
}