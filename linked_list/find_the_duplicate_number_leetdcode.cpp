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



int findDuplicateNumberLL(Node *head) {

	Node *curr = head;
	std::vector<int>arr;
	while(curr != NULL) {
		arr.push_back(curr->data);
		curr = curr->next;
	}
	std::sort(arr.begin(), arr.end());
	int ans = 0;
	for(int i = 0; i < arr.size(); i++) {
		if(arr[i] == arr[i + 1]) {
			ans = arr[i];
		}
	}
	return ans;
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
	std::cout << findDuplicateNumberLL(head) << '\n';

	return 0;
}