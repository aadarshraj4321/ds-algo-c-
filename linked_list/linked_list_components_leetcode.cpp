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

int numComponents(Node *head, std::vector<int>&arr) {

	std::set<int>s(arr.begin(), arr.end());
	int count  = 0;

	while(head) {
		if(s.count(head->data)) {
			count++;
			while(head != NULL && s.count(head->data)) {
				head = head->next;
			}
		}
		else {
			head = head->next;
		}
	}	
	return count;
}


int main() {

	Node *head = takeInput();
	printLL(head);
	std::vector<int>arr = {0, 1, 3};
	std::cout << numComponents(head,arr) << '\n';


	return 0;
}