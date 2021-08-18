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


void reorderList(Node *head) {

	if(head == NULL || head->next == NULL) {
		return;
	}

	Node *slow = head;
	Node *fast = head;

	while(fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}

	if(fast != NULL) {
		slow = slow->next;
	}
	std::stack<Node>*st;
	while(slow != NULL) {
		st.push(slow);
		slow = slow->next;
	}

	Node *curr = head;

	while(!stack.empty()) {
		Node *next = curr->next;
		curr->next = st.top();
		st.pop();
		curr->next->next = next;
		curr = next;
	}
	curr->next = NULL;
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

	return 0;
}